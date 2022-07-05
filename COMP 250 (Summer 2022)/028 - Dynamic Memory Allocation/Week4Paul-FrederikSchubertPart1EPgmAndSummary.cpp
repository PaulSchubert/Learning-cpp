//
//  main.cpp
//  028 - Dynamic Memory Allocation
//
//  Created by Paul-Frederik Schubert on 7/5/22.
//

#include <iostream>

using namespace std;


void print(int *);
// print - prints the value a pointer is pointing to
// int* - pointer that is pointing to an integer

int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 1E, Dynamic Memory Allocation - Date: 07/05/2022"<<endl<<endl;
    
    int *ptr1;
    ptr1 = new int; //point to an unknown integer
    
    *ptr1 = 45; //defined the value to be held at the address
    
    print(ptr1); //since this is already a pointer, we do not need to use '&'
    
    return 0;
}


void print(int *pointer){
    cout<<"Pointer 1: "<<*pointer<<endl;
}
