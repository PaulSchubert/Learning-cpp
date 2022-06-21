//
//  main.cpp
//  015 - Constructor Review 1
//
//  Created by Paul-Frederik Schubert on 6/21/22.
//

// ssss.cpp : Defines the entry point for th console application
// Sample Class - inspecting code
#include <iostream>
#include <string>

using namespace std;

//STEP 1 - DEFINE the new datatype/class 'aThing'
class aThing{
public: //public means that this can be accessed in step 3 with the dot notation
    aThing(void){
        weight = 99; // Note no return type in constructor functions
    } // no parameters, called default constructor
    
    aThing(double w){
        weight = w; // constructor with parameter called parameterized constructor
    }
    
    double getWeight(void){
        return weight; //public functions, accessible by dot notation
    }
    
    void setWeight(double W){
        weight = W;
    }
    
private: //cannot be accessed with the dot notation, but indirectly with a public function
    double weight; //private variables are only accessible by a function
};

int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Program 4, aThing - Date: 06/21/2022"<<endl<<endl;
    
    // STEP 2 - DECLARATION - USE the new datatype/class 'aThing' in a declaration statement to create 'ThingOne'
    aThing ThingOne;
    cout<<"Constructor Set Weight: "<<ThingOne.getWeight()<<endl;
    
    // STEP 3 - Use the OBJECT defined in step 2 - with dot notation
    ThingOne.setWeight(110);
    cout<<"Weight is: ";
    cout<<"setWeight Function/Method Set Weight: "<<ThingOne.getWeight()<<endl;
    //system("PAUSE");
    return 0;
}
