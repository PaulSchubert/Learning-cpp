//
//  main.cpp
//  034 - Virtual Functions
//
//  Created by Paul-Frederik Schubert on 7/11/22.
//

//From Bucky's C++ tutorials #56


#include <iostream>

using namespace std;


class enemy{
public:
    virtual void attack(){}  //by using 'virtual' the program knows to look in derived classes for the functions
};


class ninja: public enemy{
    void attack(){
        cout<<"ninja attack!"<<endl;
    }
};


class monster: public enemy{
    void attack(){
        cout<<"monster attack!"<<endl;
    }
};




int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 1B, Virtual Functions - Date: 07/11/2022"<<endl<<endl;
    
    ninja n;
    monster m;
    
    enemy *enemy1 = &n;
    enemy *enemy2 = &m;
    
    enemy1 -> attack();
    enemy2 -> attack();
    
    //you can have different functions from the "same type" of object, but you have different results based on the address its pointing to
    
    return 0;
}
