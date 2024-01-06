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
#include "Line.h"

using namespace std;

namespace sdds
{
    Line::Line(const char* label, int length) : LblShape(label)
    {
        if (length > 0) {
            m_length = length;
        }
    }

    void Line::getSpecs(std::istream& is)
    {
        int length;
        bool ignore = false;

        do {
            LblShape::getSpecs(is);
            is >> length;

            if (!is) {
                is.clear();
                is.ignore(32767, '\n');
            }
            else {
                is.ignore();
                m_length = length;

                ignore = true;
            }
        } while (!ignore);
    }

    void Line::draw(std::ostream& os) const
    {
        if (m_length > 0 && LblShape::label()) {
            os << LblShape::label() << endl;
            os.width(m_length);
            os.fill('=');
            os << '=';
        }
    }
}