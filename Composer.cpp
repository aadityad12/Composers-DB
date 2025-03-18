#include "Composer.h"

Composer::Composer(string name, int deathYear) : name(name),
                                                 deathYear(deathYear) {}

string Composer::getName() const { return name; }

int Composer::getDeathYear() const { return deathYear; }

bool Composer::operator<(const Composer& other) const {
     return deathYear < other.deathYear; 
    }

bool Composer::operator==(const Composer& other) const {
     return name == other.name; 
    }

ostream& operator<<(ostream& os, const Composer& c) {
    os << c.name << " - " << c.deathYear;
    return os;
}