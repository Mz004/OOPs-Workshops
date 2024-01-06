/***********************************************************************
// OOP244 Workshop #5 DIY (part 2): tester program
//
// File  Portfolio.cpp
// Version 1.0
// Author   Asam Gulaid, revised by Fardad Soleimanloo
// Description
//
// Revision History
// -------------------------------------------------------------------
// Name                 Date            Reason
// Manav Zadafiya       10-14-2023      Workshop 05
***********************************************************************/
#ifndef SDDS_Portfolio_H_
#define SDDS_Portfolio_H_
#include <iostream>
#include <cstring>

namespace sdds {

    class Portfolio {
        double m_value = 0;
        char m_stock[16];
        char m_type;

    public:
        Portfolio();
        Portfolio(double value, const char* stock, char type);
        void dispPortfolio() const;
        void emptyPortfolio();
        std::ostream& display() const;
        operator double() const;
        operator const char* () const;
        operator char() const;
        operator bool() const;
        Portfolio& operator +=(double value);
        Portfolio& operator -= (double value);
        bool operator ~ () const;
        Portfolio& operator <<(Portfolio& source);
        Portfolio& operator >>(Portfolio& source);
        bool validPortfolio() const;
        double getM_value() const;
    };
    double operator +(const Portfolio& obj1, const Portfolio& obj2);
    double operator +=(double& value, const Portfolio& source);
}
#endif // SDDS_Portfolio_H_
