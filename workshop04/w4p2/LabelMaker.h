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

#ifndef SDDS_LABELMAKER_H
#define SDDS_LABELMAKER_H

#include <iostream>
#include "Label.h"

namespace sdds
{
	class LabelMaker
	{
		int noOfLabels;
		Label* labels;
	public:
		LabelMaker(int noOfLabels);
		void readLabels();
		void printLabels();
		~LabelMaker();
	};
}

#endif  //SDDS_LABELMAKER_H
