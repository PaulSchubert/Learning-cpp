//
//  main.cpp
//  011 - Variable Types
//
//  Created by Paul-Frederik Schubert on 6/16/22.
//

#include <iostream>
#include <cmath>

using namespace std;

//testing what happens when squaring a number using different argument types

int squareInteger(int x);
double squareDouble(double d);
float squareFloat(float f);

int main(){
    cout<<"Paul-Frederik Schubert - 16 June 2022"<<endl<<endl;
    
    int x;
    double d;
    float f;
    
    cout<<"'Integer' value (x): ";
    cin>>x;
    
    cout<<endl<<"'Double' value (d): ";
    cin>>d;
    
    cout<<endl<<"'Float' value (f): ";
    cin>>f;
    cout<<endl<<endl;
    
    
    //attempting to utilize all three functions for each to see outcome
    
    cout<<"Square 'integer' (x) = "<<squareInteger(x)<<endl<<"Square 'double' (x) = "<<squareDouble(x)<<endl<<"Square 'float' (x) = "<<squareFloat(x)<<endl<<endl;
    
    cout<<"Square 'integer' (d) = "<<squareInteger(d)<<endl<<"Square 'double' (d) = "<<squareDouble(d)<<endl<<"Square 'float' (d) = "<<squareFloat(d)<<endl<<endl;
    
    cout<<"Square 'integer' (f) = "<<squareInteger(f)<<endl<<"Square 'double' (f) = "<<squareDouble(f)<<endl<<"Square 'float' (f) = "<<squareFloat(f)<<endl<<endl;
    
    return 0;
}


//definition of the functions utilizing differnet arguments

int squareInteger(int x){
    x = pow(x, 2);
    return x;
}

double squareDouble(double d){
    d = pow(d, 2);
    return d;
}

float squareFloat(float f){
    f = pow(f, 2);
    return f;
}
