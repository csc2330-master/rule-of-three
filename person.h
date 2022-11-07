//
// Created by Carlos R. Arias on 11/7/22.
//

#ifndef RULE_OF_THREE_PERSON_H
#define RULE_OF_THREE_PERSON_H

#include <string>

using std::string;

class Person {
private:
    char* _name;
    int _friendLevel;
public:
    Person(const string& name);
    // Rule of three: Copy Ctor, Copy Assignment Op., Destructor
    Person(const Person& person);
    const Person& operator=(const Person&);
    ~Person();
    string ToString()const;
    void IncreaseFriendLevel(int delta);
    int GetFriendLevel()const;
};


#endif //RULE_OF_THREE_PERSON_H
