//
//  Birthday.h
//  Learning C++
//
//  Created by Paul-Frederik Schubert on 7/18/22.
//

#ifndef Birthday_h
#define Birthday_h

class birthday{
public:
    birthday(int m, int d, int y);
    
    void printDate();
    
private:
    int month;
    int day;
    int year;
};


#endif /* Birthday_h */
