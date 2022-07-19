//
//  main.cpp
//  038 - Operator Overloading
//
//  Created by Paul-Frederik Schubert on 7/19/22.
//
//From Bucky's C++ tutorials 50 & 51

#include <iostream>
#include "Sally.h"

using namespace std;


int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 2A, Operator Overloading - Date: 07/19/2022"<<endl<<endl;
    
    Sally a(34);    //created sally object with num = 34
    Sally b(21);    //created sally object with num = 21
    
    Sally c;        //no parameter, therefore blank sally object
    
    
    c = a + b;      //took current object 'a', and added another sally objects number 'b', and returned a brand new sally object 'c'
    
    cout<<c.num<<endl;
    
    return 0;
}
