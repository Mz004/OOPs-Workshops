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
#pragma once
#ifndef SDDS_GRADUATE_H
#define SDDS_GRADUATE_H

#include "Student.h"

namespace sdds
{
    class Graduate : public Student
    {
        char* m_supervisor;
        char* m_thesisTitle;

        //Private methods
        void setThesisTitle(const char* thesisTitle);
        void setSupervisor(const char* supervisor);
        void clear();
    public:
        Graduate();
        Graduate(const char* name, int age, const char* supervisor, const char* thesisTitle);

        // Rule of three
        Graduate(const Graduate& src);
        Graduate& operator=(const Graduate& src);
        ~Graduate();

        void display() const;
    };
}
#endif // !SDDS_GRADUATE_H