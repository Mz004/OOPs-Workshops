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
#include <cstring>
#include "Rectangle.h"

using namespace std;

namespace sdds
{
    Rectangle::Rectangle(const char* label, int width, int height) : LblShape(label)
    {
        int widthCheck = strlen(LblShape::label()) + 2;
        if (width > widthCheck && height > 3) {
            m_width = width;
            m_height = height;
        }
    }


    void Rectangle::getSpecs(std::istream& is)
    {
        bool ignore = false;
        char comma;
        int height;
        int width;

        do {
            LblShape::getSpecs(is);
            is >> width >> comma >> height;

            if (!is) {
                is.clear();
                is.ignore(32767, '\n');
            }
            else {
                is.ignore();
                m_width = width;
                m_height = height;
                ignore = true;
            }

        } while (!ignore);
    }


    void Rectangle::draw(std::ostream& os) const
    {
        if (m_width > 0 && m_height >> 0) {
            os << '+';
            os.width(m_width - 2);
            os.fill('-');
            os << '-' << '+' << endl;

            os << '|';
            os.width(m_width - 2);
            os.fill(' ');
            os << left << LblShape::label() << '|' << endl;

            for (unsigned int i = 0; i < (m_height - 3); i++) {
                os << '|';
                os.width(m_width - 2);
                os.fill(' ');
                os << ' ' << '|' << endl;
            }

            os << '+';
            os.width(m_width - 2);
            os.fill('-');
            os << '-' << '+';
        }
    }
}