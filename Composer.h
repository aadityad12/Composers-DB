#include <iostream>

#pragma once

using namespace std;

class Composer {
private:
    string name;
    int deathYear;
public:
    Composer(string name, int deathYear);
    string getName() const;
    int getDeathYear() const;
    bool operator<(const Composer& other) const;
    bool operator==(const Composer& other) const;
    friend ostream& operator<<(ostream& os, const Composer& c);
};
    