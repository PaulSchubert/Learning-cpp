//
//  main.cpp
//  6 - Order of Operations
//
//  Created by Paul-Frederik Schubert on 6/14/22.
//

#include <iostream>

using namespace std;

int main(){
    cout<<"Paul-Frederik Schubert - 14 June 2022"<<endl<<endl;
    
    double a = 18, b = 6, c = 3;
    
    cout<< a+b/c <<endl;
    cout<< (a+b)/c <<endl;
    cout<< a+(b/c) <<endl;
    
    return 0;
}

//C++ does utilize standard order of operations
