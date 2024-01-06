#pragma once
/***********************************************************************
// OOP244 Workshop #5 lab (part 1): tester program
//
// File  Flight.h
// Version 1.0
// Author   Asam Gulaid, revised by Fardad Soleimanloo
// Description
//
// Revision History
// --------------------------------------------------------------------
// Name Manav Alpeshbhai Zadafiya   Date 11th Oct Reason
***********************************************************************/
#ifndef SDDS_FLIGHT_H
#define SDDS_FLIGHT_H
#include <iostream>

namespace sdds {

    const int Boen747Capacity = 388;
    const int FuelTankCapacity = 238840;

    class Flight {

        int m_passengers = 0;
        double m_fuel = 0;
        char m_title[16];
        void emptyPlane();
        

    public:
        Flight();
        Flight(int passengers, double fuel, const char* title);
        std::ostream& display()const;
        operator bool() const;
        operator int() const;
        operator double() const;
        operator const char* () const;
        Flight& operator =(Flight& f2);
        Flight& operator =(int pass);
        Flight& operator =(double gas);
        Flight& operator +=(double gas);
        Flight& operator +=(int pas);
        Flight& operator -=(double ful);
        Flight& operator -=(int people);
        Flight& operator <<(Flight& right);
        Flight& operator >>(Flight& right);
        int getpassengers() const;
        bool isTrueFlight() const;
    };
    bool operator ~(const Flight& f1);
    int operator +(const Flight& f1, const Flight& f2);
    int operator +=(int&, const Flight& f1);
}
#endif // SDDS_FLIGHT_H