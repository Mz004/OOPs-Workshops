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
#ifndef SDDS_LINE_H_
#define SDDS_LINE_H_

#include "LblShape.h"

namespace sdds
{
    class Line : public LblShape
    {
        unsigned int m_length{ 0 };
    public:
        Line() {}
        Line(const char* label, int length);
        virtual ~Line() {}

        void getSpecs(std::istream& is);
        void draw(std::ostream& os) const;
    };
}

#endif