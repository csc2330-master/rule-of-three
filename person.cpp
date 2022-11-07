//
// Created by Carlos R. Arias on 11/7/22.
//

#include "person.h"
#include <cstring>
#include <sstream>

using std::stringstream;

Person::Person(const string &name):_friendLevel(5) {
    _name = new char[name.length() + 1];
    strcpy(_name, name.c_str());
}

Person::~Person() {
    delete[] _name;
}

string Person::ToString() {
    stringstream ss;
    ss << "Name: " << _name << ", Level: " << _friendLevel;
    return ss.str();
}

void Person::IncreaseFriendLevel(int delta) {
    _friendLevel += delta;
}

int Person::GetFriendLevel() const {
    return _friendLevel;
}
