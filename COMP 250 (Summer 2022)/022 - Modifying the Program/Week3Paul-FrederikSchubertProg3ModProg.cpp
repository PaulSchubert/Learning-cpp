//
//  main.cpp
//  022 - Modifying the Program
//
//  Created by Paul-Frederik Schubert on 6/29/22.
//



// program colors

// -> Convert class into .h header file and .ccp implemenation file.

// Keep int main() funciton same...

#include <iostream>
#include <string>

/* srand example */
#include <ctime>
#include <stdio.h>      /* NULL */
#include <stdlib.h>     /* srand, rand */

#include "Colors.h"

using namespace std;


int main(){
    cout<<"Name: Paul-Frederik Schubert - Program Name: Part 3, Program Colors - Date: 06/29/2022"<<endl<<endl;
    
colorPicker P;
//
P.printAllColors();

    cout << endl<<"Random Color: " << P.randomColor()<<endl<<endl;

//system("pause");

return 0;
}
