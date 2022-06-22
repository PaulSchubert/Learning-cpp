//
//  main.cpp
//  019 - Rectangle
//
//  Created by Paul-Frederik Schubert on 6/22/22.
//

//classes example
#include <iostream>

using namespace std;


class Rectangle{
public:
    Rectangle(){
        width = 0;
        height = 0;
    }
    Rectangle(int w, int h){
        set_values(w, h);
    }
    
    void set_values(int w, int h);
    
    int area(){
        answer = width * height;
        return answer;
    }
    
private:
    int answer, width, height;
};

void Rectangle::set_values(int x, int y){
    width = x;
    height = y;
}


int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Program 8, Rectangle Class - Date: 06/22/2022"<<endl<<endl;
    
    Rectangle rect1(5, 6);
    cout<<"area: "<<rect1.area()<<endl;
    
    Rectangle rect2;
    rect2.set_values(3, 4);
    cout<<"area: "<<rect2.area()<<endl;
    
    return 0;
}
