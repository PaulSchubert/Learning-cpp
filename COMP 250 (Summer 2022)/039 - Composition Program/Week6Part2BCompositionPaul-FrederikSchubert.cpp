//
//  main.cpp
//  039 - Composition Program
//
//  Created by Paul-Frederik Schubert on 7/19/22.
//

#include <iostream>
#include <iomanip>
#include "Person.h"
#include "Date.h"

using namespace std;


int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 2B, Composition Program - Date: 07/19/2022"<<endl<<endl;
    
    
    cout<<"Default constructor:"<<endl;
    date d1;
    person p1;
    
    p1.printInfo();
    cout<<endl<<endl;
    
    
    cout<<"Paramaterized constructor:"<<endl;
    date d2(13, 6, 2002);
    person p2("Paul", "Schubert", d2);
    
    p2.printInfo();
    cout<<endl<<endl;
    
    
    cout<<"Using setters and getters:"<<endl;
    
    person p3;
    p3.setFirstName("Frederik");
    p3.setLastName("Schubert");
    p3.da.setDay(14);
    p3.da.setMonth(6);
    p3.da.setYear(1999);
    
    p3.getFirstName();
    p3.getLastName();
    p3.da.getDate();
    
    
    return 0;
}
