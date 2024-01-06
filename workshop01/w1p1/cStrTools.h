/*
Name         : Manav Alpeshbhai Zadafiya
Student Id   : 144095221
E-mail       : mazadafiya@myseneca.ca
Secion       : ZCC
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*/
#ifndef _SDDS_CSTRTOOLS_H_
#define _SDDS_CSTRTOOLS_H_
namespace sdds {


	char toLower(char ch);
	int strCmp(const char* s1, const char* s2);
	int strnCmp(const char* s1, const char* s2, int len);
	void strCpy(char* des, const char* src);
	int strLen(const char* str);
	const char* strStr(const char* str, const char* find);
	int isAlpha(char ch);
	int isSpace(char ch);
	void trim(char word[]);
	void toLowerCaseAndCopy(char des[], const char source[]);
}
#endif // !_SDDS_CSTRTOOLS_H_