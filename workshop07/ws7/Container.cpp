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

#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include "Container.h"

using namespace std;
namespace sdds 
{
    int Container::volume() {
        return Volume;
    }

    void Container::setEmpty() {
        Valid_Container = false;
    }

    int Container::capacity() {
        return Capacity;
    }

    Container::Container(const char* Content, int Capacity, int Content_volume) {
        if (Content == NULL || Content_volume > Capacity) {
            Valid_Container = false;
        }
        else {
            // Set the container properties
            strcpy(this->Description, Content);
            this->Capacity = Capacity;
            this->Volume = Content_volume;
            Valid_Container = true;
        }
    }

    int Container::operator -= (int value) {
        if (Volume - value >= 0) {
            Volume -= value;
        }
        else {
            value = Volume;
            Volume = 0;
        }
        return value;
    }

    int Container::operator += (int value) {
        if (Volume + value <= Capacity) {
            Volume += value;
        }
        else {
            value = Capacity - Volume;
            Volume = Capacity;
        }
        return value;
    }

    bool Container::valid() {
        return Valid_Container;
    }

    void Container::clear(int Capacity, const char* m_description) {
        if (Capacity >= 1 && m_description != NULL && strlen(m_description) >= 1) {
            this->Capacity = Capacity;
            strcpy(this->Description, m_description);
            this->Volume = 0;
            Valid_Container = true;
        }
    }

    ostream& Container::print(ostream& ostr) {
        if (Valid_Container) {
            ostr << Description << ": (" << Volume << "cc/" << Capacity << ")";
        }
        else {
            ostr << "****: (**cc/***)";
        }
        return ostr;
    }

    istream& Container::read(istream& istr) {
        int number;
        if (!Valid_Container) {
            cout << "Broken Container, adding aborted! Press <ENTER> to continue...." << endl;
            istr.ignore();
        }
        else {
            bool validValue = false;
            cout << "Add to ";
            print(cout);
            while (!validValue) {
                cout << endl << "> ";
                istr >> number;
                if (number > Capacity) {
                    cout << "Invalid Integer, retry:";
                }
                else if (number < 1 || number > 999) {
                    cout << "Value out of range [1<=val<=999]:";
                }
                else validValue = true;
            }
            number = (*this += number);
            cout << "Added " << number << " CCs" << endl;
        }
        return istr;
    }
}