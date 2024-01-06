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
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip>
#include <cstring>
#include "EmployeeOffice.h"

using namespace std;

namespace sdds {
   EmployeeOffice::EmployeeOffice(const char* name, int office) { 
      strcpy(m_name, name);
      m_office = office;
   }
   ostream& EmployeeOffice::display(ostream& os)const {
      return os << m_name << " (Office# " << m_office << ")";
   }
   bool EmployeeOffice::operator==(int office)const {
      return m_office == office;
   }
}
