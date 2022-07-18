//
//  People.h
//  Learning C++
//
//  Created by Paul-Frederik Schubert on 7/18/22.
//

#ifndef People_h
#define People_h

#include <string>
#include "Birthday.h"

using namespace std;


class people{
public:
    people(string x, birthday bo);
    void printInfo();
private:
    string name;
    birthday dateOfBirth;
};



#endif /* People_h */
