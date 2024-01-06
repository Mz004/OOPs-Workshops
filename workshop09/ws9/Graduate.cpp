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
#include "Graduate.h"

using namespace std;

namespace sdds
{
    void Graduate::setThesisTitle(const char* thesisTitle)
    {
        if (m_thesisTitle != nullptr) {
            delete[] m_thesisTitle;
            m_thesisTitle = nullptr;
        }

        if (thesisTitle != nullptr) {
            m_thesisTitle = new char[strlen(thesisTitle) + 1];
            strcpy(m_thesisTitle, thesisTitle);
        }
        else {
            clear();
        }
    }

    void Graduate::setSupervisor(const char* supervisor)
    {
        if (m_supervisor != nullptr) {
            delete[] m_supervisor;
            m_supervisor = nullptr;
        }

        if (supervisor != nullptr) {
            m_supervisor = new char[strlen(supervisor) + 1];
            strcpy(m_supervisor, supervisor);
        }
        else {
            clear();
        }
    }

    void Graduate::clear()
    {
        m_supervisor = nullptr;
        m_thesisTitle = nullptr;
    }

    Graduate::Graduate() : Student()
    {
        clear();
    }

    Graduate::Graduate(const char* name, int age, const char* thesisTitle, const char* supervisor) : Student(name, age)
    {
        clear();
        setSupervisor(supervisor);
        setThesisTitle(thesisTitle);
    }

    Graduate::Graduate(const Graduate& src) : Student(src)
    {
        clear();
        *this = src;
    }

    Graduate& Graduate::operator=(const Graduate& src)
    {
        if (this != &src) {
            (Student&)*this = src;
            setSupervisor(src.m_supervisor);
            setThesisTitle(src.m_thesisTitle);
        }
        else {
            clear();
        }
        return *this;
    }

    Graduate::~Graduate()
    {
        delete[] m_supervisor;
        delete[] m_thesisTitle;

        clear();
    }

    void Graduate::display() const
    {
        Student::display();

        if (m_thesisTitle != nullptr && m_supervisor != nullptr) {
            cout << "Thesis Title: " << m_thesisTitle << endl;
            cout << "Supervisor: " << m_supervisor << endl;
            cout << "---------------------------------------------" << endl;
        }
    }
}