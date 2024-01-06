/******************************************************************************
                         Workshop - #8
Full Name   : Manav Alpeshbhai Zadafiya
Student ID# : 144095221
Email       : mazadafiya@myseneca.ca
Section     : ZCC
Date        : 2023-11-19
Authenticity Declaration:
I have done all the coding by myself and only copied the code that my
professor provided to complete my workshops and assignments.
******************************************************************************/
#include <iostream>
#include "Shape.h"

using namespace std;

namespace sdds
{
    ostream& operator<<(ostream& os, const Shape& src)
    {
        src.draw(os);
        return os;
    }


    istream& operator>>(istream& is, Shape& src)
    {
        src.getSpecs(is);
        return is;
    }
}