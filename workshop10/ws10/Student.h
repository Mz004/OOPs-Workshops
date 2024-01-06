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
#ifndef SDDS_STUDENT_H
#define SDDS_STUDENT_H

#include <iostream>
#include "Displayable.h"

namespace sdds 
{
   class Student : public Displayable {
      int m_stno{};
      char m_name[41]{};
      double m_gpa{};
   public:
      Student() = default;
      Student(int stno, const char* name, double gpa);
      std::ostream& display(std::ostream& os)const;
      bool operator==(double gpa)const;
   };
}
#endif // !SDDS_STUDENT_H

