//
//  main.cpp
//  037 - Composition
//
//  Created by Paul-Frederik Schubert on 7/18/22.
//
//From Bucky's C++ tutorial #46

#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;

int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 1B, Composition - Date: 07/18/2022"<<endl<<endl;
    
    birthday birthObj(3, 13, 2000);
    
    people paul("Paul", birthObj);
    paul.printInfo();
    
    return 0;
}
