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
#define _CRT_SECURE_NO_WARNINGS

#include "Portfolio.h"

using namespace std;
namespace sdds {


    Portfolio::Portfolio() {
        emptyPortfolio();
    }

    void Portfolio::emptyPortfolio()
    {
        m_value = 0;
        m_stock[0] = 0;
        m_type = 'E';
    }
    Portfolio::Portfolio(double value, const char* stock, char type) {
        emptyPortfolio();
        if (value >= 0 && (type == 'V' || type == 'G' || type == 'I')) {
            m_value = value;
            m_type = type;
            strcpy(m_stock, stock);
        }
    }

    void Portfolio::dispPortfolio() const {
        cout << " ";
        cout.width(10);
        cout << (const char*)(*this);
        cout << " | ";
        cout << "Value: ";
        cout.width(10);
        cout << double(*this);
        cout << " | ";
        cout << " Type: ";
        cout << char(*this);
    }
    std::ostream& Portfolio::display() const {

        if (~*this) {
            cout << " Portfolio  |  Bad-NG |";
            dispPortfolio();
        }
        else if (*this) {
            cout << " Portfolio  |  Active |";
            dispPortfolio();

        }
        else {
            cout << " Portfolio  |  EMPTY  |";
            dispPortfolio();
        }
        return cout;
    }

    Portfolio::operator double() const
    {
        return m_value;
    }
    
    Portfolio::operator const char* () const
    {
        return m_stock;
    }
    
    Portfolio::operator char() const
    {
        return m_type;
    }
    
    Portfolio::operator bool() const
    {
        return (m_type == 'G' || m_type == 'V' || m_type == 'I');
    }
    
    Portfolio& Portfolio::operator+=(double floatValue)
    {
        if ((floatValue > 0) && (m_type == 'G' || m_type == 'V' || m_type == 'I'))
        {
            m_value += floatValue;
        }

        return *this;
    }
    
    Portfolio& Portfolio::operator-=(double floatValue)
    {

        if ((floatValue > 0) && (m_type == 'G' || m_type == 'V' || m_type == 'I'))
        {
            m_value -= floatValue;
        }

        return *this;
    }
    
    bool Portfolio::operator~() const
    {
        return (m_value < 0);

    }
   
    Portfolio& Portfolio::operator <<(Portfolio& source)
    {
        if (this != &source && this->validPortfolio() && source.validPortfolio())
        {
            m_value += source.m_value;
            source.m_value = 0;
            source.m_stock[0] = 0;
            source.m_type = 'E';
        }


        return *this;
    }
    
    Portfolio& Portfolio::operator >>(Portfolio& source)
    {
        if (this != &source && this && source)
        {
            source.m_value += m_value;
            m_value = 0;
            m_stock[0] = 0;
            m_type = 'E';
        }
        return *this;
    }
    
    double Portfolio::getM_value() const
    {
        return m_value;

    }
    
    double operator+(const Portfolio& obj1, const Portfolio& obj2)
    {
        double sumValue = obj1.getM_value() + obj2.getM_value();
        return sumValue;
    }
    
    double operator +=(double& value, const Portfolio& source)
    {
        value += source.getM_value();
        return value;
    }
    
    bool Portfolio::validPortfolio() const
    {
        bool validity = false;
        if ((m_value >= 0) && (m_type == 'G' || m_type == 'V' || m_type == 'I'))
        {
            validity = true;
        }
        return validity;
    }
}