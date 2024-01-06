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

#ifndef SDDS_LABEL_H
#define SDDS_LABEL_H

#include <iostream>
#include <cstring>

namespace sdds
{
	class Label {
		char frameString[9];
		char* m_content;
	public:
		Label();
		Label(const char* frameArg);
		Label(const char* frameArg, const char* content);
		~Label();
		std::istream& readLabel();
		std::ostream& printLabel()const;
		void clear();
		Label& text(const char* content);
	};
}
#endif //SDDS_LABEL_H