#include <iostream>
using std::cout;

#include "Sword.h"
#include "Sword.cpp"

int main( )
{
    cout << "Usando Sword no main\n";
    
    Sword royalGuardSword;
    royalGuardSword.print();

    cout << "\nSword com strength decrementada\n";
    
    royalGuardSword.decreaseStrength();
    royalGuardSword.print();

    return 0;

}