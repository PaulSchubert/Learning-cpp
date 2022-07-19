//
//  Date.h
//  Learning C++
//
//  Created by Paul-Frederik Schubert on 7/19/22.
//

#ifndef Date_h
#define Date_h

#include <iostream>
#include <iomanip>

using namespace std;


class date{
public:
    //constructors
    date();
    date(int d, int m, int y);
    
    //setters
    void setDate(int d, int m, int y);
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    
    //getters
    void getDate();
    void getDay();
    void getMonth();
    void getYear();
    
private:
    int day, month, year;
};

#endif /* Date_h */
