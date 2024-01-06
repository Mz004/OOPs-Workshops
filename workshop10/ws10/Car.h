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
#ifndef SDDS_CAR_H
#define SDDS_CAR_H

#include <iostream>
#include "Displayable.h"

namespace sdds 
{
   class Car : public Displayable {
      char m_plate[9]{};
      char m_makeModel[41]{};
   public:
      Car() = default;
      Car(const char* plate , const char* makeModel);
      std::ostream& display(std::ostream& os)const;
      bool operator==(const char* mmSubstr)const;
   };
}
#endif // !SDDS_CAR_H
