/******************************************************************************
						 Workshop - #4 (Part-1)
Full Name   : Manav Alpeshbhai Zadafiya
Student ID# : 144095221
Email       : mazadafiya@myseneca.ca
Section     : ZDD
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
******************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include "CarInventory.h"
#include<iostream>
#include<cstring>
#include<iomanip>

using namespace std;
namespace sdds {
	
	void CarInventory::resetInfo()
	{
		m_type = nullptr;
		m_brand = nullptr;
		m_model = nullptr;
		m_year = 0;
		m_code = 0;
		m_price = 0;
	}

	CarInventory::CarInventory()
	{
		resetInfo();
	}

	CarInventory::CarInventory(const char* type, const char* brand, const char* model, int year, int code, double price)
	{
		if ( year >= 1990 || code >= 100 || code < 1000 || price > 0)
		{
			m_type = nullptr;
			m_brand = nullptr;
			m_model = nullptr;
			m_type = new char[strlen(type) + 1];
			strcpy(m_type, type);
			m_brand = new char[strlen(brand) + 1];
			strcpy(m_brand, brand);
			m_model = new char[strlen(model) + 1];
			strcpy(m_model, model);
			m_year = year;
			m_code = code;
			m_price = price;
		}
		else
		{
			resetInfo();
		}
	}
	
	CarInventory::~CarInventory()
	{
		delete[] m_type;
		delete[] m_brand;
		delete[] m_model;
		m_model = nullptr;
		m_brand = nullptr;
		m_type = nullptr;
		resetInfo();
	}

	CarInventory& CarInventory::setInfo(const char* type, const char* brand, const char* model, int year, int code, double price)
	{
		delete[] m_type;
		delete[] m_brand;
		delete[] m_model;

		if (type == nullptr || brand == nullptr || model == nullptr || year < 1990 || code < 100 || price < 0)
		{
			resetInfo();
		}
		else
		{
			m_type = nullptr;
			m_brand = nullptr;
			m_model = nullptr;
			m_type = new char[strlen(type) + 1];
			strcpy(m_type, type);
			m_brand = new char[strlen(brand) + 1];
			strcpy(m_brand, brand);
			m_model = new char[strlen(model) + 1];
			strcpy(m_model, model);
			m_year = year;
			m_code = code;
			m_price = price;
		}
		return *this;
	}

	void CarInventory::printInfo() const
	{
		std::cout << "|" << " " << left << std::setw(11) << m_type << "|" << " " << left << std::setw(17) << m_brand << "|" << " " << left 
			<< std::setw(17) << m_model << "|" << " " << left << std::setw(5) << m_year << "|" << "  " << left << std::setw(4) << m_code << "|" 
			<< "  " << left << right << std::setw(8) << fixed << setprecision(2) << m_price << " " << "|" << std::endl;
	}

	bool CarInventory::isValid() const

	{
		return m_type != nullptr && m_brand != nullptr && m_model != nullptr && m_year >= 1990 && m_code >= 100 && m_price >= 0;
	}

	bool CarInventory::isSimilarTo(const CarInventory& car) const
	{
		if (m_type == nullptr || m_brand == nullptr || m_model == nullptr || car.m_type == nullptr || car.m_brand == nullptr || car.m_model == nullptr) 
		{
			return false;
		}

		return (strcmp(m_type, car.m_type) == 0) && (strcmp(m_brand, car.m_brand) == 0) && (strcmp(m_model, car.m_model) == 0) &&(m_year == car.m_year);
	};

	int find_similar(CarInventory car[], const int num_cars)
	{
		for (int i = 0; i < num_cars; i++) 
		{
			for (int j = i + 1; j < num_cars; j++) 
			{
				if (car[i].isSimilarTo(car[j])) 
				{
					return i;
				}
			}
		}
		return -1;
	}
}
