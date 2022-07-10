//
//  main.cpp
//  032 - Pointers and Classes
//
//  Created by Paul-Frederik Schubert on 7/8/22.
//

#include <iostream>
#include <iomanip>
#include <unistd.h>
#include "watch.h"

using namespace std;

int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 2C, Pointers, Pointers and Classes - Date: 07/08/2022"<<endl<<endl;
    
    watch *ptrMyWatch;
    ptrMyWatch = new watch;
    
    watch w1;
    *ptrMyWatch = w1;
    
    ptrMyWatch -> tick(10);
    
    return 0;
}
