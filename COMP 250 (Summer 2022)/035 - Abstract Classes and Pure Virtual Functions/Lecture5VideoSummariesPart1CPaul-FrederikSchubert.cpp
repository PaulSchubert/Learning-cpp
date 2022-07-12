//
//  main.cpp
//  035 - Abstract Classes and Pure Virtual Functions
//
//  Created by Paul-Frederik Schubert on 7/12/22.
//

//from bucky's C++ tutorial #57




#include <iostream>

using namespace std;


class enemy{    //an ABSTRACT CLASS is a class with a PURE VIRTUAL FUNCTION in it
public:
    virtual void attack()=0;    //pure virtual function has no implementation/body whatsoever - a pure virtual function doesn't do anything at all - any class inheriting from a class with a pure virtual function NEEDS to have something in order to overwrite it
    //if it were just a regular virtual function, we have the option of overwritting it, only for PURE virtual functions is it required to overwrite the function
};


class ninja: public enemy{
    void attack(){
        cout<<"ninja attack!"<<endl;
    }
};


class monster: public enemy{
    void attack(){  //if this weren't present, the function from the enemy class would be utilized
        cout<<"monster attack!"<<endl;
    }
};




int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 1C, Abstract Classes and Pure Virtual Functions - Date: 07/12/2022"<<endl<<endl;
    
    ninja n;
    monster m;
    
    enemy *enemy1 = &n;
    enemy *enemy2 = &m;
    
    enemy1 -> attack();
    enemy2 -> attack();
    
    
    
    return 0;
}
