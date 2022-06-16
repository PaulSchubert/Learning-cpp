//
//  main.cpp
//  10 -
//
//  Created by Paul-Frederik Schubert on 6/15/22.
//

#include <iostream>

using namespace std;

string convertToRoman(int year);

int main(){
    cout<<"Paul-Frederik Schubert - 16 June 2022"<<endl<<endl;
    
    int year;
    
    cout<<"Please input a year to be converted to roman numerals: ";
    cin>>year;
    
    cout<<convertToRoman(year)<<endl;
    
    return 0;
}


string convertToRoman(int year){
    
    string romanYear;
    
    while(year >= 1000){
        romanYear = romanYear + "M";
        year = year - 1000;
    }
    
    while(year >= 500){
        if(year >= 900){
            romanYear = romanYear + "CM";
            year = year - 900;
        }
        else{
            romanYear = romanYear + "D";
            year = year - 500;
            
            while(year >= 100){
                romanYear = romanYear + "C";
                year = year - 100;
            }
        }
    }
    
    while(year >= 100){
        if(year >= 400){
            romanYear = romanYear + "CD";
            year = year - 400;
        }
        else{
            romanYear = romanYear + "C";
            year = year - 100;
        }
    }
    
    while(year >= 50){
        if(year >= 90){
            romanYear = romanYear + "XC";
            year = year - 90;
        }
        else{
            romanYear = romanYear + "L";
            year = year - 50;
            
            while(year >= 10){
                romanYear = romanYear + "X";
                year = year - 10;
            }
        }
    }
    
    while(year >= 10){
        if(year >= 40){
            romanYear = romanYear + "XL";
            year = year - 40;
        }
        else{
            romanYear = romanYear + "X";
            year = year - 10;
        }
    }
    
    while(year >= 5){
        if(year == 9){
            romanYear = romanYear + "IX";
            year = year - 9;
        }
        else{
            romanYear = romanYear + "V";
            year = year - 5;
            while(year >= 1){
                romanYear = romanYear + "I";
                year = year - 1;
            }
        }
    }
    
    while(year >= 1){
        romanYear = romanYear + "I";
        year = year - 1;
    }
    return romanYear;
}
