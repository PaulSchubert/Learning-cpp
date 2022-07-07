//
//  main.cpp
//  030 - Pointers, Dynamic Allocation and Variables
//
//  Created by Paul-Frederik Schubert on 7/7/22.
//

#include <iostream>

using namespace std;

int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 2A, Pointers, Dynamic Allocation and Variables - Date: 07/07/2022"<<endl<<endl;
    
    int intVar = 42;
    int *ptrInt;
    ptrInt = &intVar;
    
    cout << *ptrInt << endl;
    
    *ptrInt = 23;
    
    cout << *ptrInt << endl;
    
    int *ptrInt2;
    ptrInt2 = new int;
    *ptrInt2 = 42;
    
    cout << *ptrInt2 << endl;
    
    
    return 0;
}
