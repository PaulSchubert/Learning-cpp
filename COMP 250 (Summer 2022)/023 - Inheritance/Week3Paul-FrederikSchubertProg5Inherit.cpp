//
//  main.cpp
//  023 - Inheritance
//
//  Created by Paul-Frederik Schubert on 6/29/22.
//

#include <iostream>
#include "Square.h"
#include "Cube.h"

using namespace std;


int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 5, Inheritance - Date: 06/30/2022"<<endl<<endl;
    
    Cube c1(2, 2, 2);
    cout<<c1.getVolume()<<endl;
    
    Cube c2;
    c2.setWidth(2);
    c2.setLength(3);
    c2.setHeight(2);
    cout<<c2.getVolume()<<endl;
    
    Cube c3;
    c3.setWidth(2);
    c3.setLength(3);
    c3.setHeight(3);
    cout<<c3.getVolume()<<endl;
    return 0;
}
