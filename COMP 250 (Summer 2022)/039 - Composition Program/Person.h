//
//  Person.h
//  Learning C++
//
//  Created by Paul-Frederik Schubert on 7/19/22.
//

#ifndef Person_h
#define Person_h

#include <iostream>
#include <iomanip>
#include "Date.h"

class person{
public:
    //constructors
    person(string f, string l, date d);
    person();
    
    
    //composed object
    date da;
    
    //setters
    void setFirstName(string f);
    void setLastName(string l);
    
    //getters
    void printInfo();
    void getFirstName();
    void getLastName();
    
private:
    string firstName, lastName;
};

#endif /* Person_h */
