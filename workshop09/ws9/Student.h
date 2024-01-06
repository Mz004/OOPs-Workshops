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
#ifndef SDDS_STUDENT_H
#define SDDS_STUDENT_H

namespace sdds
{
    class Student
    {
        //private Data members
        char* m_name;
        int m_age;
        //private methods
        void clear();
        void setName(const char* name);
    public:
        Student();
        Student(const char* name, int age);

        // Rule of three
        Student(const Student& src);
        Student& operator=(const Student& src);
        virtual ~Student();

        void display() const;
    };
}
#endif // !SDDS_STUDENT_H