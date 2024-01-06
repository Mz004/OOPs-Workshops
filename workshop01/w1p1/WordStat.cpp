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
#include <iostream>
#include "Word.h"
using namespace sdds;
using namespace std;
int main()
{
	char filename[256];
	programTitle();
	cout << "Enter filename: ";
	cin >> filename;
	wordStats(filename);
	return 0;
}
