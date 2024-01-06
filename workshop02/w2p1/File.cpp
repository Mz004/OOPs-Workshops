/***********************************************************************
// OOP244 Workshop #2 lab (part 1)
//
// File  File.cpp
// Version 1.0
// Author   Fardad Soleimanloo
// Description
//    To be completed by students
// Revision History
// --------------------------------------------------------------------
// Name: Manav Alpeshbhai Zadafiya      Date 20th Sept       Reason
***********************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include "File.h"

using namespace std;

namespace sdds
{
    FILE* fptr;
    bool openFile(const char filename[])
    {
        fptr = fopen(filename, "r");
        return fptr != NULL;
    }

    void closeFile()
    {
        if (fptr) {
            fclose(fptr);
        }
    }

    int noOfRecords()
    {
        int noOfRecs = 0;
        char ch;
        while (fscanf(fptr, "%c", &ch) == 1)
        {
            noOfRecs += (ch == '\n');
        }

        rewind(fptr);
        return noOfRecs;
    }

    //   TODO: read functions go here
    bool read(char*& name)
    {
        name = new char[128];

        if (fscanf(fptr, "%127[^\n]\n", name) == 1)
        {
            return true;
        }

        return false;
    }

    bool read(int& employe_no)
    {
        if (fscanf(fptr, "%d,", &employe_no) == 1)
        {
            return fptr != NULL;
        }

        return fptr == NULL;
    }

    bool read(double& employee_salary)
    {
        if (fscanf(fptr, "%lf,", &employee_salary))
        {
            return true;
        }
        return false;
    }

}