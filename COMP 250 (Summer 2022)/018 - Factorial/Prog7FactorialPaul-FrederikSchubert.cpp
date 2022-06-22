//
//  main.cpp
//  018 - Factorial
//
//  Created by Paul-Frederik Schubert on 6/21/22.
//

#include <iostream>

using namespace std;


class factorialClass{
public:
    
    int FactNum(int number){
        if(number <= 1){
            return 1;
        }
        temp = number * FactNum(number - 1);
        return temp;
    }
    
private:
    int temp;
};


int main(void){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Program 7, Factorial Class - Date: 06/22/2022"<<endl<<endl;
    
    //TEST CASES
    //factorialClass FactialInstance;
    
    //cout << "The factorial of 3 is: " << FactialInstance.FactNum(3) << endl;

    //cout << "The factorial of 5 is: " << FactialInstance.FactNum(5) << endl;

    //cout << "The factorial of 7 is: " << FactialInstance.FactNum(7) << endl;
    
    
    int number;
    cout<<"Please enter a positive integer: ";
    cin>>number;
    
    if(number<=0){
        cout<<"That is not a positive integer. \n";
    }
    else{
        factorialClass FactialInstance;
        cout<<number<<" factorial is: "<<FactialInstance.FactNum(number)<<endl;
    }
    
    return 0;
}
