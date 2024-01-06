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
#ifndef SDDS_Lblshape_H_
#define SDDS_Lblshape_H_

#include "Shape.h"

namespace sdds
{
    class LblShape : public Shape
    {
        char* m_label = nullptr;
    protected:
        const char* label() const;
    public:
        LblShape() {}
        LblShape(const char* label);
        virtual ~LblShape();
        void getSpecs(std::istream& is);

        LblShape(const LblShape& src) = delete;
        LblShape& operator=(const LblShape& src) = delete;
    };
}

#endif