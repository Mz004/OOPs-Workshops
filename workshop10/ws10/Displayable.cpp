/******************************************************************************
                         Workshop - #10
Full Name   : Manav Alpeshbhai Zadafiya
Student ID# : 144095221
Email       : mazadafiya@myseneca.ca
Section     : ZCC
Date        : 2023-12-03
Authenticity Declaration:
I have done all the coding by myself and only copied the code that my
professor provided to complete my workshops and assignments.
******************************************************************************/
#include <iostream>
#include "Displayable.h"

using namespace std;

namespace sdds 
{
   ostream& operator<<(ostream& os, const Displayable& c) {
      return c.display(os);
   }
}