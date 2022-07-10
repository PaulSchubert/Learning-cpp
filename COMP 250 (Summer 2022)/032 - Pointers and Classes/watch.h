//
//  watch.h
//  Learning C++
//
//  Created by Paul-Frederik Schubert on 7/10/22.
//

#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;

#ifndef watch_h
#define watch_h

class watch{
public:
    //constructors
    watch(int h, int m, int s);
    watch();
    
    //setting times & reset
    void setHour(int h);
    void setMinute(int m);
    void setSecond(int s);
    void reset(int h, int m, int s);
    
    //getting values
    int getHour();
    int getMinute();
    int getSecond();
    
    //function that actually does the clock feature (other functions are primarily for test cases)
    void tick(int sec);
    
    
    //function that prints out the current time
    void getTime();

    
private:
    int hour_;
    int minute_;
    int second_;
};


#endif /* watch_h */
