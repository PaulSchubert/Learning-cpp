//
//  main.cpp
//  021 - Circle
//
//  Created by Paul-Frederik Schubert on 6/22/22.
//

#include <iostream>
#include <cmath>

using namespace std;


class circle{
public:
    //default and parameterized constructor
    circle(){
        radius = 0;
    }
    circle(int r){
        radius = r;
    }
    
    
    //setting the radius
    void setRad(double r){
        radius = r;
    }
    
    //getting radius value
    double getRad(){
        return radius;
    }
    
    
    //circumfrence
    double calcCir(){
        if(checkRad() == 0){
            return 0;
        }
        else{
            return 2 * M_PI * radius;
        }
    }
    
    //area
    double calcArea(){
        if(checkRad() <= 0){
            return 0;
        }
        else{
            return M_PI * pow(radius, 2);
        }
    }
    
    //diameter
    double calcDiam(){
        if(checkRad() <= 0){
            return 0;
        }
        else{
            return 2 * radius;
        }
    }
private:
    double radius;
    
    int checkRad(){
        if(radius <= 0){
            cout<<"ERROR: The Radius is less than or equal to 0. "<<endl;
            return 0;
        }
        else{
            return 1;
        }
    }
};



int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Program 10, Circle Class - Date: 06/23/2022"<<endl<<endl;
    
    double rad;
    
    cout<<"What is the radius of your circle (Parameterized constructor)? ";
    cin>>rad;
    
    circle circle(rad);
    
    cout<<endl<<"The Circumfrence is: "<<circle.calcCir()<<endl;
    cout<<"The Area is: "<<circle.calcArea()<<endl;
    cout<<"The Diameter is: "<<circle.calcDiam()<<endl<<endl;
    
    
    cout<<"What is the radius of your circle (Using 'setRad')? ";
    cin>>rad;
    
    circle.setRad(rad);
    
    cout<<endl<<"The Circumfrence is: "<<circle.calcCir()<<endl;
    cout<<"The Area is: "<<circle.calcArea()<<endl;
    cout<<"The Diameter is: "<<circle.calcDiam()<<endl<<endl<<endl;
    
    
    cout<<"'getRad' and Error cases: "<<endl;
    
    cout<<"The last input radius was: "<<circle.getRad()<<endl<<endl;
    circle.setRad(0);
    cout<<"The radius has been changed to 0: ";
    cout<<endl<<"The Circumfrence is: "<<circle.calcCir()<<endl;
    cout<<"The Area is: "<<circle.calcArea()<<endl;
    cout<<"The Diameter is: "<<circle.calcDiam()<<endl<<endl;
    
    return 0;
}
