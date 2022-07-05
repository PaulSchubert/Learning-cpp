//
//  main.cpp
//  027 - Pointers and Math
//
//  Created by Paul-Frederik Schubert on 7/5/22.
//

#include <iostream>

using namespace std;

int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 1D, Pointers and Math - Date: 07/05/2022"<<endl<<endl;
    
    int paul[5];
    int *ptr0 = &paul[0];
    int *ptr1 = &paul[1];
    int *ptr2 = &paul[2];
    
    cout<<"ptr0 is at "<<ptr0<<endl;
    cout<<"ptr1 is at "<<ptr1<<endl;
    cout<<"ptr2 is at "<<ptr2<<endl;
    
    ptr0 +=2; //pointers don't work like math, you cannot change the memory address, only the element which it is pointing at
    //this essentially makes 'ptr0' point at the element 2 further down
    cout<<"ptr0 is now at "<<ptr0<<endl;
    
    return 0;
}
