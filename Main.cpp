#include "LinkedList.h"
#include "Composer.h"
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    LinkedList<Composer> composers;
    ifstream file("composers.txt");
    string line;

    if (!file) {
        cout << "Error in opening the file, Please try again" << endl;
        return 1;
    }

    while (getline(file, line)) {
        stringstream ss(line);
        string name;
        int deathYear;
        getline(ss, name, ',');
        ss >> deathYear;
        composers.insert(Composer(name, deathYear));
    }

    char choice;
    do {
        cout << "Enter 's' to search, 'r' to remove, 'd' to display,"
             << " or 'e' to exit: ";
        cin >> choice;
        cin.ignore();

        if (choice == 'd') {
            cout << endl;
            composers.printList();
            cout << endl;
        } 
        else if (choice == 's') {
            string name;
            cout << "Enter a composer's name to search for: ";
            getline(cin, name);
            if (composers.find(Composer(name, 0)))
                cout << name << " was found in the list" << endl;
            else
                cout << name << " was not found in the list" << endl;
        } 
        else if (choice == 'r') {
            string name;
            cout << "Enter a composer's name to remove: ";
            getline(cin, name);
            if (composers.remove(Composer(name, 0)))
                cout << name << " was successfully removed from the list" 
                     << endl;
            else
                cout << name << " was not found in the list when attempting " 
                     << "to remove" << endl;
        }
    } while (choice != 'e');

    file.close();
    
    return 0;
}
