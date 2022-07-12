//
//  main.cpp
//  036 - Virtual Functions Practice
//
//  Created by Paul-Frederik Schubert on 7/12/22.
//


//Classes are not split to individual files as this was just a quick exercise


#include <iostream>
#include <string>

using namespace std;


class animal{
public:
    //constructor and setting name function
    animal(){}
    
    animal(string name){
        animalName = name;
    }
    void setName(string name){
        animalName = name;
    }
    
    //virtual function to be overwritten by all derived classes individually
    virtual void animalSound(){
        cout<<animalName<<" says "<<sound<<endl;
    }
    
protected:
    string animalName, sound;
};


class cat: public animal{
public:
    cat(){
        animalName = "Cat";
    }
    
    void animalSound(){
        cout<<animalName<<" says meow"<<endl;
    }
};


class dog: public animal{
public:
    dog(){
        animalName = "Dog";
    }
    
    void animalSound(){
        cout<<animalName<<" says woof"<<endl;
    }
};


class elephant: public animal{
public:
    elephant(){
        animalName = "Elephant";
    }
    
    void animalSound(){
        cout<<animalName<<" says toot"<<endl;
    }
};


class mouse: public animal{
public:
    mouse(){
        animalName = "Mouse";
    }
    
    void animalSound(){
        cout<<animalName<<" says squeak"<<endl;
    }
};




int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 3, Virtual Functions Practice - Date: 07/12/2022"<<endl<<endl;
    
    string input;
    int inputS;
    
    //declaring instances (utilized later in switch statement)
    cat C1;
    dog D1;
    elephant E1;
    mouse M1;
    
    animal *A;
    
    //user input for animal type
    do{
        cout<<"Please choose an animal to read what sound they make: \n cat \n dog \n elephant \n mouse \n";
        cin>>input;
    }while(input != "cat" && input != "dog" && input != "elephant" && input != "mouse");
    
    
    //Converting input to integer for following switch statement
    if(input == "cat"){
        inputS = 1;
    }
    else if(input == "dog"){
        inputS = 2;
    }
    else if(input == "elephant"){
        inputS = 3;
    }
    else{
        inputS = 4;
    }
    
    cout<<endl;
    //switch statement for output
    switch(inputS){
        case 1:
            A = &C1;
            A -> animalSound();
            break;
            
        case 2:
            A = &D1;
            A -> animalSound();
            break;
            
        case 3:
            A = &E1;
            A -> animalSound();
            break;
            
        case 4:
            A = &M1;
            A -> animalSound();
            break;
    }
    
    cout<<endl;
    return 0;
}
