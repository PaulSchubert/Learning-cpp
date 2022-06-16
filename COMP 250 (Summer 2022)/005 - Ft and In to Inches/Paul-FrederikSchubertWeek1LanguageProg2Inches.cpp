//
//  main.cpp
//  5 - Ft and In to Inches
//
//  Created by Paul-Frederik Schubert on 6/14/22.
//

#include <iostream>

using namespace std;

int main(){
    cout<<"Paul-Frederik Schubert - 14 June 2022"<<endl<<endl;
    
    //declare and initialize variables
    int feet = 0, inches = 0, height = 0;
    
    //gathering information
    cout<<"Value of 'feet' in height: ";
    cin>>feet;
    cout<<"Value of remaining inches in height: ";
    cin>>inches;
    
    //calculations
    height = inches + (feet * 12);
    
    //Final output
    cout<<endl<<"You are "<<height<<" inches tall."<<endl;
    
    return 0;
}
