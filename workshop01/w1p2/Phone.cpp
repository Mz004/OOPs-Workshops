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

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <iostream>
#include <iomanip>
#include "Phone.h"
#include <string.h>
#include "cStrTools.h"

using namespace std;

namespace sdds
{
	// runs the phone directory application
	void phoneDir(const char* programTitle, const char* fileName)
	{
		phoneBook phone;
		char name[MAX_NAME + 1];
		int flag = 1;
		const char* filePtr = 0;
		char lower_case[MAX_NAME + 1];
		openHeader(programTitle);

		FILE* fptr = fopen(fileName, "r");

		if (fptr != NULL) {
			do {
				cout << "Enter a partial name to search (no spaces) or enter '!' to exit" << endl;
				cout << "> ";
				cin >> name;
				toLowerCaseAndCopy(name, name);

				if (strCmp(name, "!") == 0) {
					cout << "Thank you for using " << programTitle << " directory." << endl;
					flag = 0;
				}
				else
				{
					while (fscanf(fptr, "%[^\t]\t%s\t%s\t%s\n", phone.name, phone.areaCode, phone.prefix, phone.number) != EOF)
					{
						toLowerCaseAndCopy(lower_case, phone.name);
						filePtr = strStr(lower_case, name);

						if (filePtr != NULL)
						{
							cout << phone.name << ": (" << phone.areaCode << ") " << phone.prefix << "-" << phone.number << endl;

						}
					}
					fseek(fptr, 0, SEEK_SET);
				}
			} while (flag);

			fclose(fptr);
		}
		else
		{
			fileOpenFailure(programTitle, fileName);
		}
	}


	void openHeader(const char* programTitle)
	{
		cout << programTitle << " phone direcotry search" << endl;
		cout << "-------------------------------------------------------" << endl;
	}
	void fileOpenFailure(const char* programTitle, const char* fileName)
	{
		cout << fileName << " file not found!" << endl;
		cout << "Thank you for using Broken Phone Book directory." << endl;
	}
}