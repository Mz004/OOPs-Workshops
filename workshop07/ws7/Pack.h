/******************************************************************************
                         Workshop - #7
Full Name   : Manav Alpeshbhai Zadafiya
Student ID# : 144095221
Email       : mazadafiya@myseneca.ca
Section     : ZCC
Date        : 2023-11-10
Authenticity Declaration:
I have done all the coding by myself and only copied the code that my
professor provided to complete my workshops and assignments.
******************************************************************************/
#pragma once
#ifndef PACK_H
#define PACK_H
#include "Container.h"

using namespace sdds;
namespace sdds {
    class Pack : public Container {
    private:
        int Unit_Size;
        int Size;
        int Number_Of_Units;

    public:
        Pack(const char* Content, int Size, int unitSize = 330, int NumberOfUnits = 0);
        int operator -= (int units);
        int operator += (int units);
        int size();
        int unit();
        int noOfUnits();
        void clear(int packSize, int unitSize, const char* content);
        ostream& print(ostream& out);
        istream& read(istream& in);

        friend ostream& operator << (ostream& out, Pack& P) {
            return P.print(out);
        }
        friend istream& operator >> (istream& in, Pack& P) {
            return P.read(in);
        }
    };
}

#endif // PACK_H