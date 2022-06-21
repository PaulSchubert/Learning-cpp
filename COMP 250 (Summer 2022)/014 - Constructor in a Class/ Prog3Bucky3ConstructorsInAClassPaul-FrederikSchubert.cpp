//
//  main.cpp
//  014 - Constructor in a Class
//
//  Created by Paul-Frederik Schubert on 6/21/22.
//

#include <iostream>
#include <string>

using namespace std;

class paulsClass{
public:
    paulsClass(string z){
        setName(z);
    }
    
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
    
private:
    string name;
};


int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Program 3, Bucky 3, Constructor in a Class - Date: 06/21/2022"<<endl<<endl;
    
    string name;
    
    cout<<"Name? ";
    cin>>name;
    
    paulsClass paulsObject(name);
    cout<<endl<<paulsObject.getName()<<endl;
    
    paulsClass po("Hello there");
    cout<<po.getName()<<endl;
    
    return 0;
}
