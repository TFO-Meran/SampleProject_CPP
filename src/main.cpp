/******************************************************************************
 *   
 *   @file:     main.cpp
 *   @brief:    sample code with simple "pass by reference"-funcion
 *   @author:   CG
 *   Website:   https://...
 *   Support:   ...
 *   @todo: ..test todo.. 
 *     
 ******************************************************************************/
/*  License:
 */

// ****************************************************************************
// ****************************************************************************
//
//                            S A M P L E
//
// ****************************************************************************
// ****************************************************************************

#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);
int potenz(int a, int b);

int main() {
    string wdh="";
    
    do {
        int basis, exponent, ergebnis, i;
        
        cout << "Geben Sie die Basis ein:" << endl;
        cin >> basis;
        cout << "Geben Sie den Exponenten ein:" << endl;
        cin >> exponent;
        cout << basis << " hoch " << exponent << " ergibt " << potenz(basis, exponent) << endl;
        cout << "[Enter] = wiederholen / [q] = beenden" << endl;
        cin >> wdh;
    } while (wdh != "q");
    return 0;
}

int potenz(int a, int b) {
    int c, i;
    
    c = 1;
    for (i = 1; i <= b; i++) {
        c = c * a;
    }
    
    return c;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

//=============================================================================
//                           END OF FILE
//=============================================================================
