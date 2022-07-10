//
//  main.cpp
//  032 - Pointers and Classes
//
//  Created by Paul-Frederik Schubert on 7/8/22.
//

#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;


class watch{
public:
    //constructors
    watch(int h, int m, int s){
        hour_ = h;
        minute_ = m;
        second_ = s;
    }
    watch(){
        hour_ = 12;
        minute_ = 30;
        second_ = 0;
    }
    
    //setting times & reset
    void setHour(int h){
        hour_ = h;
    }
    void setMinute(int m){
        minute_ = m;
    }
    void setSecond(int s){
        second_ = s;
    }
    void reset(int h, int m, int s){
        hour_ = h;
        minute_ = m;
        second_ = s;
    }
    
    //getting values
    int getHour(){
        return hour_;
    }
    int getMinute(){
        return minute_;
    }
    int getSecond(){
        return second_;
    }
    
    
    
    void tick(int sec){
        for(int i = 0; i < sec; i ++){
            getTime();
            //sleep(1);
            second_ ++;
            if(second_ == 60){
                if(minute_ == 59){
                    if(hour_ == 23){
                        hour_ = 0;
                    }
                    else{
                        hour_ ++;
                    }
                    minute_ = 0;
                }
                else{
                    minute_ ++;
                }
                second_ = 0;
            }
        }
    }
    
    
    //function that prints out the current time
    void getTime(){
        cout<<setfill('0')<<setw(2)<<hour_<<":"<<setw(2)<<minute_<<":"<<setw(2)<<second_<<endl;
    }

    
private:
    int hour_;
    int minute_;
    int second_;
};


int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 2C, Pointers, Pointers and Classes - Date: 07/08/2022"<<endl<<endl;
    /*
    watch *ptrMyWatch;
    ptrMyWatch = new watch();
    
    *ptrMyWatch.getTime;
    */
    
    watch w1;
    w1.tick(86401 + 86401/2);
    
    
    
    
    
    
    return 0;
}





