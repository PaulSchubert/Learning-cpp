
#include <iostream>
using namespace std;

int main(){
    cout<<"Paul-Frederik Schubert - 14 June 2022"<<endl;
    int firstNum = 0, secondNum = 0;
    cout<<"Enter first Number (example 69): "<<endl;
    cin>>firstNum;
    cout<<"Enter second Number (example 42): "<<endl;
    cin>>secondNum;
    cout<<endl;
    
    if (firstNum < secondNum){
        cout<<"First Number is less than the second number"<<endl;
    }
    else if (firstNum == secondNum){
        cout<<"Both numbers are equal"<<endl;
    }
    else{
        cout<<"First number is greater than the second number"<<endl;
    }
}
