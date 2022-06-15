//
//  main.cpp
//  8 - The square
//
//  Created by Paul-Frederik Schubert on 6/15/22.
//

#include <iostream>
#include <cmath>

using namespace std;

double calcArea(double value);
double calcDiagonal(double value);
double calcPeri(double value);

int main(){
    cout<<"Paul-Frederik Schubert - 15 June 2022"<<endl<<endl;
    
    double side;
    
    cout<<"What is the side length of your square? ";
    cin>>side;
    cout<<endl;
    
    cout<<"The are of your square is "<<calcArea(side)<<endl;
    cout<<"The diagonal of your square is "<<calcDiagonal(side)<<endl;
    cout<<"The perimeter of your square is "<<calcPeri(side)<<endl<<endl;
    
    return 0;
}


double calcArea(double s){
    double area;
    
    area = s * s;
    return area;
}

double calcDiagonal(double s){
    double diagonal;
    
    diagonal = sqrt(2 * pow(s, 2));
    return diagonal;
}

double calcPeri(double s){
    double peri;
    
    peri = 4 * s;
    return peri;
}
