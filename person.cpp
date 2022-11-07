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

Person::Person(const Person &person): _friendLevel(person._friendLevel) {
    _name = new char[strlen(person._name) + 1];
    strcpy(_name, person._name);
}

Person::~Person() {
    delete[] _name;
}

string Person::ToString()const {
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

const Person& Person::operator=(const Person& rhs) {
    delete[] _name;
    _name = new char[strlen(rhs._name) + 1];
    strcpy(_name, rhs._name);
    return *this;
}



















