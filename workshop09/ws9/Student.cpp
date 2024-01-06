/******************************************************************************
                         Workshop - #9
Full Name   : Manav Alpeshbhai Zadafiya
Student ID# : 144095221
Email       : mazadafiya@myseneca.ca
Section     : ZCC
Date        : 2023-11-23
Authenticity Declaration:
I have done all the coding by myself and only copied the code that my
professor provided to complete my workshops and assignments.
******************************************************************************/
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

namespace sdds
{
    void Student::clear()
    {
        m_name = nullptr;
        m_age = 0;
    }

    void Student::setName(const char* name)
    {
        if (m_name != nullptr) {
            delete[] m_name;
            clear();
        }

        if (name != nullptr) {
            m_name = new char[strlen(name) + 1];
            strcpy(m_name, name);
        }
        else {
            clear();
        }
    }

    Student::Student()
    {
        clear();
    }

    Student::Student(const char* name, int age)
    {
        clear();
        setName(name);
        m_age = age;
    }

    Student::Student(const Student & src)
    {
        clear();
        *this = src;
    }

    Student & Student::operator=(const Student & src)
    {
        if (this != &src) {
            setName(src.m_name);
            m_age = src.m_age;
        }
        else {
            clear();
        }

        return *this;
    }

    Student::~Student()
    {
        delete[] m_name;
        clear();
    }

    void Student::display() const
    {
        if (m_name != nullptr && m_age > 0) {
            cout << "Name: " << m_name << endl;
            cout << "Age: " << m_age << endl;
        }
    }
}