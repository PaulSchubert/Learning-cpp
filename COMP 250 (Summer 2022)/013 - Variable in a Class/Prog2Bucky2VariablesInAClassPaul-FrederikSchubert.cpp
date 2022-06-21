//
//  main.cpp
//  013 - Variable in a Class
//
//  Created by Paul-Frederik Schubert on 6/20/22.
//

#include <iostream>
#include <string>

using namespace std;

class paulsClass{
public: //mutator and inspector functions
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
    
private: //make all variables in a class private, makes them not accessible in main
    string name;
    
};


int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Program 2, Bucky 2, Variable in a Class - Date: 06/21/2022"<<endl<<endl;
    
    string name;
    
    paulsClass paulsObject;
    
    cout<<"Name? ";
    cin>>name;
    
    paulsObject.setName(name);
    
    cout<<endl<<paulsObject.getName()<<endl;
    
    return 0;
}
