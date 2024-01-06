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
#ifndef SDDS_READWRITE_H
#define SDDS_READWRITE_H

#include <iostream>

namespace sdds 
{
   class Displayable 
   {
   public:
      virtual std::ostream& display(std::ostream& os)const = 0;
   };
   std::ostream& operator<<(std::ostream& os, const Displayable& c);
}
#endif // !SDDS_READWRITE_H

