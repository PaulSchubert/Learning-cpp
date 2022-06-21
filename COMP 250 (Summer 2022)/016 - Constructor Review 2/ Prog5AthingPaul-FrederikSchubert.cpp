//
//  main.cpp
//  016 - Constructor Review 2
//
//  Created by Paul-Frederik Schubert on 6/21/22.
//

#include <iostream>
#include <string>

using namespace std;

//STEP 1 - DEFINE the new datatype/class 'aThing' - using function properties
class aThing{
public: //anything after this can be accessed by the dot notation in step 3
    aThing(void);
    //no return type in constructor functions
    //no parameters -> called default constructor
    
    aThing(double w); //constructor with parameter called parameterized constructor
    
    double getWeight(void); // public functions accessible by dot notation
    void setWeight(double W);
    
private: //cannot be accessed by dot notation, but indirectly by public functions
    double weight; //private variables can only be accessed by functions above
};

int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Program 5, aThing - Date: 06/21/2022"<<endl<<endl;
    
    //STEP 2 - DECLARATION - USE the new datatype/call 'aThing' in a declaration statement to create 'ThingOne'
    //uses the default constructor - function with NO arguments
    aThing ThingOne;
    cout<<"Default Constructor Set Weight: "<<ThingOne.getWeight()<<endl;
    
    //STEP 3 - Use the OBJECT defined in step 2 - with dot notation
    ThingOne.setWeight(110);
    cout<<"Weight is: ";
    cout<<"setWeight Function/Method Set Weight: "<<ThingOne.getWeight()<<endl;
    
    //STEP 2 - DECLARATION - USE the pramitized constructor function in a declaration statement to create 'ThingTwo'
    aThing ThingTwo(44);
    
    cout<<"Paramitized Constructor Set Weight: "<<ThingTwo.getWeight()<<endl;
    
    //STEP 3 - Use the OBJECT defined in step 2 - with dot notation
    ThingTwo.setWeight(110);
    cout<<"Weight is: ";
    cout<<"setWeight Function/Method Set Weight: "<<ThingTwo.getWeight()<<endl;
    // system("PAUSE");
    return 0;
}

//Function prototypes for aThing class
//Note the :: Scope resolution operator '::' - used to clarify which class the function belongs to
aThing::aThing(void){
    weight = 99;
}
//Note - no return type in constructor functions
//No parameters called the default constructor
aThing::aThing(double w){
    weight = w; //constructor with parameter is called parameterized constructor
}
double aThing::getWeight(void){
    return weight; //public functions accessible by dot notation
}
void aThing::setWeight(double W){
    weight = W;
}
