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
#include <cstring>
#include <string>
#include "Pack.h"

using namespace std;
namespace sdds 
{
    Pack::Pack(const char* Content, int Size, int unitSize, int NumberOfUnits)
        :Container(Content, Size* unitSize, unitSize* NumberOfUnits) {
        this->Size = Size;
        this->Unit_Size = unitSize;
        this->Number_Of_Units = NumberOfUnits;
    }

    int Pack::operator -= (int units) {
        int result = Container::operator-=(units * Unit_Size) / Unit_Size;
        this->Number_Of_Units -= result;
        return result;
    }

    int Pack::operator += (int units) {
        int result = Container::operator+=(units * Unit_Size) / Unit_Size;
        this->Number_Of_Units += result;
        return result;
    }

    int Pack::size() {
        return Size;
    }

    int Pack::unit() {
        return Unit_Size;
    }

    int Pack::noOfUnits() {
        return Number_Of_Units;
    }

    void Pack::clear(int packSize, int unitSize, const char* content) {
        if (unitSize > 0) {
            int packunit = packSize * unitSize;
            Size = packSize;
            Container::clear(packunit, content);
            this->Unit_Size = unitSize;
            this->Number_Of_Units = 0;
        }
    }


    ostream& Pack::print(ostream& out) {
        Container::print(out);
        if (valid()) {
            out << ", " << Number_Of_Units << " in a pack of " << Size;
        }
        return out;
    }

    istream& Pack::read(istream& in) {
        int units;
        if (!valid()) {
            cout << "Broken Container, adding aborted! Press <ENTER> to continue....";
            in.ignore();
        }
        else if (Number_Of_Units == Size) {
            in.ignore();
            cout << "Pack is full!, press <ENTER> to continue..." << endl;
        }
        else {
            bool validValue = false;
            cout << "Add to ";

            print(cout);

            int maxVal = Size - Number_Of_Units;
            int flag = 0;
            while (!validValue && flag == 0) {
                cout << endl << "> ";
                in >> units;
                if (units > Size) {
                    cout << "Invalid Integer, retry: ";
                }
                else if (units < 1 || units > maxVal) {
                    cout << "Value out of range [1<=val<=" << maxVal << "]: ";
                    in >> units;
                    flag = 1;
                }
                else validValue = true;
            }
            units = (*this += units);
            cout << "Added " << units << endl;
        }
        return in;
    }
}