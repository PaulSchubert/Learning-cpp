//
//  main.cpp
//  020 - Box
//
//  Created by Paul-Frederik Schubert on 6/22/22.
//

#include <iostream>

using namespace std;


class box{
public:
    //constructors
    box(){
        width = 0;
        height = 0;
        depth = 0;
    }
    box(double w, double h, double d){
        width = w;
        height = h;
        depth = d;
    }
    
    
    //calculating volume
    double calcVolume(){
        if(isBox() == 0){} //no extra return statement as the one below will already be zero bc of multiplication
        return width * height * depth;
    }
    
    //calculating surface area
    double calcArea(){
        if(isBox() == 0){
            return 0;
        }
        else{
            return 2 * width * height + 2 * depth * height + 2 * depth * width;
        }
    }
    
    
    //3 methods for inputs
    void setWidth(double w){
        width = w;
    }
    void setHeight(double h){
        height = h;
    }
    void setDepth(double d){
        depth = d;
    }
    
    
    //3 methods for outputs
    double getWidth(){
        return width;
    }
    double getHeight(){
        return height;
    }
    double getDepth(){
        return depth;
    }
    
private:
    double width, height, depth;
    
    int isBox(){
        if(width ==0 || height == 0 || depth == 0){
            cout<<"ERROR: These dimensions do not make a box."<<endl;
            return 0;
        }
        else{
            return 1;
        }
    }
};



int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Program 9, Box Class - Date: 06/22/2022"<<endl<<endl;
    
    //Box 1 - Test Parameterized constructor, area of sides and volume functions
    cout<<"Box 1:"<<endl;
    box B1(1, 2, 3);
    cout<<"Width = "<<B1.getWidth()<<endl;
    cout<<"Area = "<<B1.calcArea()<<endl;
    cout<<"Volume = "<<B1.calcVolume()<<endl;
    
    //Box 2 - Test set functions, Volume, getHeight and area functions
    cout<<endl<<"Box 2:"<<endl;
    box B2;
    B2.setWidth(2);
    B2.setHeight(3);
    B2.setDepth(4);
    cout<<"Height = "<<B2.getHeight()<<endl;
    cout<<"Area = "<<B2.calcArea()<<endl;
    cout<<"Volume = "<<B2.calcVolume()<<endl;
    
    //Box 3 - Test zero value error for calc Area and Volmes of sides function
    cout<<endl<<"Box 3:"<<endl;
    box B3;
    B3.setWidth(3);
    B3.setHeight(4);
    cout<<"Depth = "<<B3.getDepth()<<endl;
    cout<<"Area = "<<B3.calcArea()<<endl;
    cout<<"Volume = "<<B3.calcVolume()<<endl;
    
    return 0;
}
