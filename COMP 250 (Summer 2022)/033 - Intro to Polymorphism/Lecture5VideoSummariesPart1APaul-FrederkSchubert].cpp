//
//  main.cpp
//  033 - Intro to Polymorphism
//
//  Created by Paul-Frederik Schubert on 7/11/22.
//

/*
 polymorphism allows you to call the same function on many different objects
 all derived classes inherit from the same class, and you are able to use the same function for many different outcomes
 
 From Bucky's C++ tutorials #55
 */


#include <iostream>

using namespace std;


class enemy{
protected:
    int attackPower;
    
public:
    void setAttackPower(int a){
        attackPower = a;
    }
};


class ninja: public enemy{
public:
    void attack(){
        cout<<"I am a ninja, ninja chop! -"<<attackPower<<endl;
    }
};


class monster: public enemy{
public:
    void attack(){
        cout<<"monster must eat you!! -"<<attackPower<<endl;
    }
};




int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 1A, Intro to Polymorphism - Date: 07/11/2022"<<endl<<endl;
    
    ninja n;
    monster m;
    
    enemy *enemy1 = &n; //a ninja is an emeny, and anything an enemy can do, a ninja can do
    enemy *enemy2 = &m;
    
    enemy1 -> setAttackPower(29); //already knows that this applies to the ninja object, so the ninjas attack power is 29
    //this is valid because a ninja is just a more specific type of enemy
    //the program knows this applies to the ninja because of addresses
    
    enemy2 -> setAttackPower(99);
    
    n.attack();
    m.attack();
    
    
    return 0;
}
