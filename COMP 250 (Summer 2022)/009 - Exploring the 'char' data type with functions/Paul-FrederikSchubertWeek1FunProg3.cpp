//
//  main.cpp
//  9 - Exploring the 'char' data type with functions
//
//  Created by Paul-Frederik Schubert on 6/15/22.
//

//Code and Decode a character
#include <iostream>
using namespace std;

char CodeLetter(char c);  //prototype for function - code below main()
char DecodeLetter(char c);  //prototype for function

int main(){
    
    char codedLetter;
    char decodedLetter;
    char letter = 'A';  //you can change this one to test
    
    cout<<"Letter = "<<letter<<endl;
    codedLetter = CodeLetter(letter);
    cout<<"Coded Letter = "<<codedLetter<<endl;
    decodedLetter = DecodeLetter(codedLetter);
    cout<<"Decoded Letter = "<<decodedLetter<<endl;
    
    return 0;
}

char CodeLetter(char c){
    return c + 1;
}

char DecodeLetter(char c){
    return c-1;
}
