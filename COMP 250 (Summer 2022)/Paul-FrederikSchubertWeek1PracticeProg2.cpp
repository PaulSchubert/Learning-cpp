

#include <iostream>  //Name of prewritten code <file> you want to use...
                     //always good practice to reuse code
                     //#includes names files/libraries of existing code you want to reuse
using namespace std; //command to avoid writting std:: infront of cout and endl commands
int main(){
    cout<<"Paul-Frederik Schubert - 14 June 2022"<<endl;
    int height = 0, feet = 0, inches = 0; //declare and initialize variables
    cout<<"What is your height in inches (example 66): "<<endl; //print prompt for height
    cin>>height; //pause and wait for the user to input height in inches
    feet = height / 12; //calculate feet (no decimal)
    inches = height % 12; //amount of remaining inches
    cout<<"Your height is "<<feet<<" feet and "<<inches<<" inches"<<endl<<endl;
            //printout to monitor message and results of calculation
    return 0; //end program
}
