//
//  main.cpp
//  040 - Operator Overriding Program
//
//  Created by Paul-Frederik Schubert on 7/19/22.
//

#include <iostream>
#include "distance1.h"

using namespace std;


int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 3, Operator Overriding Program - Date: 07/19/2022"<<endl<<endl;
    
    distance1 d1(1, 3, 6);
    distance1 d2(1, 2, 5);
    
    distance1 dAdd = d1 + d2;
    distance1 dSub = d1 - d2;
    
    
    cout<<"Addition: "<<dAdd.yards<<" yards, "<<dAdd.feet<<" feet, "<<dAdd.inches<<" inches"<<endl;
    cout<<"Subtraction: "<<dSub.yards<<" yards, "<<dSub.feet<<" feet, "<<dSub.inches<<" inches"<<endl<<endl;
    
    if(d1 == d2){
        cout<<"Equal: true"<<endl;
    }
    else{
        cout<<"Equal: false"<<endl;
    }
    if(d1 < d2){
        cout<<"First < Second: true"<<endl;
    }
    else{
        cout<<"First < Second: false"<<endl;
    }
    if(d1 > d2){
        cout<<"First > Second: true"<<endl<<endl;
    }
    else{
        cout<<"First > Second: false"<<endl<<endl;
    }
    return 0;
}
