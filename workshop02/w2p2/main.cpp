/***********************************************************************
// OOP244 Workshop #2 DIY (part 2):
//
// File  File.cpp
// Version 1.0
// Author   Fardad Soleimanloo
// Description
// To completed by students
// Revision History
// --------------------------------------------------------------------
// Name: Manav Zadafiya      Date 09-22-2023        Reason
***********************************************************************/

#include <iostream>
#include "Population.h"

using namespace sdds;
int main() 
{
    char code[4]{};
    while (getPostalCode(code)) 
    {
        if (load("PCpopulations.csv", code)) 
        {
            display();
        }
        deallocateMemory();
    }
    return 0;
}