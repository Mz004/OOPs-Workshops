/******************************************************************************
                         Workshop - #3 (Part-2)
Full Name   : Manav Alpeshbhai Zadafiya
Student ID# : 144095221
Email       : mazadafiya@myseneca.ca
Section     : ZCC
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
******************************************************************************/

#ifndef TRAIN_H
#define TRAIN_H

namespace sdds
{
	const int MIN_TIME = 700;
	const int MAX_TIME = 2300;
	const int MAX_NO_OF_PASSENGERS = 1000;
	class Train
	{
		char* name;
		int num_passengers;
		int Depart;

	public:
		Train();
		~Train();
		void initialize();
		bool validTime(int value) const;
		bool validnum_passengers(int value) const;
		void set(const char* name);
		void set(int num_passengers, int Departure);
		void set(const char* name, int num_passengers, int Departure);
		int remaining(int passengers);
		int passenegrs_sum(int added_pass);
		bool load(int& left_behind);
		bool updateDepartureTime();
		bool transfer(const Train& form);
		void finalize();
		bool isInvalid() const;
		int getDepartureTime() const;
		void display() const;
	};

}
#endif // !TRAIN_H