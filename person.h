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
    ~Person();
    string ToString();
    void IncreaseFriendLevel(int delta);
    int GetFriendLevel()const;
};


#endif //RULE_OF_THREE_PERSON_H
