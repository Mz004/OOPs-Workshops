/******************************************************************************
					Workshop - #1 (Part-2)
Full Name   : Manav Alpeshbhai Zadafiya
Student ID# : 144095221
Email       : mazadafiya@myseneca.ca
Section     : ZCC
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
******************************************************************************/

#pragma once
#ifndef SDDS_Phone_H 
#define SDDS_Phone_H
#define MAX_NAME 50
#define MAX_LEN 20

struct phoneBook {
	char name[MAX_NAME + 1];
	char areaCode[MAX_LEN + 1];
	char prefix[MAX_LEN + 1];
	char number[MAX_LEN + 1];
};

namespace sdds 
{
	void openHeader(const char* programTitle);
	void phoneDir(const char* programTitle, const char* fileName);
	void fileOpenFailure(const char* programTitle, const char* fileName);
}
#endif