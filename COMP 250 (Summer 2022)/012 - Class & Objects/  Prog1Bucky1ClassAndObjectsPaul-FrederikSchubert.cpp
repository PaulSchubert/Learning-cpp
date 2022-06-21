//
//  main.cpp
//  012 - Class & Objects
//
//  Created by Paul-Frederik Schubert on 6/20/22.
//

#include <iostream>

using namespace std;



class paulsClass{
public:
    void saying(){
        cout<<"Hello there"<<endl;
    }
};



int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Program 1, Bucky 1, Class and Objects - Date: 06/20/2022"<<endl<<endl;
    
    paulsClass paulsObject;
    paulsObject.saying();
    
    return 0;
}
