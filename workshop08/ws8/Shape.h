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
#ifndef SDDS_SHAPE_H_
#define SDDS_SHAPE_H_

#include <iostream>

namespace sdds
{
    class Shape
    {
    public:
        virtual ~Shape() {}
        virtual void draw(std::ostream& os) const = 0;
        virtual void getSpecs(std::istream& is) = 0;
    };
    std::ostream& operator<<(std::ostream& os, const Shape& src);
    std::istream& operator>>(std::istream& is, Shape& src);
}

#endif