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
#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H

#include <iostream>
#include "Displayable.h"

namespace sdds 
{
   class EmployeeOffice : public Displayable {
      int m_office{};
      char m_name[41]{};
   public:
      EmployeeOffice() = default;
      EmployeeOffice(const char* name, int office);
      std::ostream& display(std::ostream& os)const;
      bool operator==(int office)const;
   };
}
#endif // !SDDS_EMPLOYEE_H