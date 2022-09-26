#include <iostream>
#include "test.h"

using namespace std;

int main(int, char **)
{
    cout << "Hello World!\n";
    
    int a;
    int b;

    
    cout << "Switch variables!\n";
    cout << "Enter a value a:\n";
    cin >> a;
    cout << "Enter a value b:\n";
    cin >> b;
    cout << "a=" << a << " b=" << b << "\n";
    switchval(&a, &b);
    cout << "a=" << a << " b=" << b << "\n";
}
