/******************************************************************************
                         Workshop - #4 (Part-2 DIY)
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
#include "LabelMaker.h"

using namespace std;

namespace sdds
{
	LabelMaker::LabelMaker(int noOfLabels)
	{
		if (noOfLabels < 1)
		{
			cout << "You can only input greater than zero" << endl;
			noOfLabels = 0;
		}
		else
		{
			this->noOfLabels = noOfLabels;
			labels = new Label[noOfLabels];
		}
	}
	void LabelMaker::readLabels()
	{
		if (noOfLabels > 0)
		{
			cout << "Enter ";
			cout << noOfLabels;
			cout << " labels:" << endl;

			for (int i = 0; i < noOfLabels; i++)
			{
				cout << "Enter label number " << i + 1 << endl;
				labels[i].readLabel();
			}
		}
	}
	void LabelMaker::printLabels()
	{
		for (int i = 0; i < noOfLabels; i++)
		{
			labels[i].printLabel();
			cout << endl;
		}
	}
	LabelMaker::~LabelMaker()
	{
		delete[] labels;
		labels = nullptr;
	}
}