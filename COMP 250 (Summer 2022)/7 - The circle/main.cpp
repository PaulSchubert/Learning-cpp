//
//  main.cpp
//  7 -
//
//  Created by Paul-Frederik Schubert on 6/15/22.
//

#include <iostream>
#include <cmath>

using namespace std;

//header for functions defined below the main()
double calcArea(double value);
double calcDiameter(double value);
double calcCircumfrence(double value);


int main(){
    cout<<"Paul-Frederik Schubert - 25 June 2022"<<endl<<endl;
    
    double r;
    
    cout<<"What is the radius of your circle? ";
    cin>>r;
    cout<<endl;
    
    cout<<"The area of your circle is "<<calcArea(r)<<endl<<"The diameter of your circle is "<<calcDiameter(r)<<endl<<"The circumfrence of your circle is "<<calcCircumfrence(r)<<endl<<endl;
    
    return 0;
}


//functions that are used in the main()
double calcArea(double r){
    
    double area;
    
    area = M_PI * pow(r, 2);
    
    return area;
}

double calcDiameter(double r){
    
    double diameter;
    
    diameter = 2 * r;
    
    return diameter;
}

double calcCircumfrence(double r){
    
    double circumfrence;
    
    circumfrence = 2 * M_PI * r;
    
    return circumfrence;
}
