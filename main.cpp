#include <iostream>

#include "person.h"

using std::cout;
using std::endl;

void PrintPerson(Person p);



int main() {
    Person d("Daniel San");
    PrintPerson(d);
    return 0;
}


void PrintPerson(Person p){
    cout << p.ToString() << endl;
}
