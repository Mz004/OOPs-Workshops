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
#ifndef CONTAINER_H
#define CONTAINER_H
#include <iostream>
#include <cstring>

using namespace std;
namespace sdds {
    //Container class Declaration 
    class Container {
    private:
        char Description[50];
        int Capacity;
        int Volume;
        bool Valid_Container;

    protected:
        int volume();
        void setEmpty();
        int capacity();

    public:
        Container(const char* Content, int Capacity, int Content_volume = 0);
        int operator -= (int value);
        int operator += (int value);
        bool valid();
        void clear(int Capacity, const char* Content);
        ostream& print(ostream& out);
        istream& read(istream& in);

        friend ostream& operator << (ostream& out, Container& C) {
            return C.print(out);
        }
        friend istream& operator >> (istream& in, Container& C) {
            return C.read(in);
        }
    };
}

#endif // CONTAINER_H