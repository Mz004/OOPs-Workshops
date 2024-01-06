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

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <iomanip>
#include "Train.h"

namespace sdds
{

    Train::Train() : name(nullptr), num_passengers(-1), Depart(-1) {}

    Train::~Train() {
        finalize();
    }

    void Train::initialize() {
        //finalize();
        name = nullptr;
        num_passengers = -1;
        Depart = -1;
    }
    bool Train::validTime(int value) const {
        int minutes = value % 100;
        return (value >= MIN_TIME && value <= MAX_TIME && minutes <= 59);
    }

    bool Train::validnum_passengers(int value) const {
        return (value > 0 && value <= MAX_NO_OF_PASSENGERS);
    }

    void Train::set(const char* name) {
        finalize();
        if (name && name[0] != '\0') { //priya
            this->name = new char[strlen(name) + 1];
            strcpy(this->name, name);
        }
    }

    void Train::set(int num_passengers, int Departure) {
        if (validnum_passengers(num_passengers) && validTime(Departure)) {
            this->num_passengers = num_passengers;
            this->Depart = Departure;
        }
        else {
            this->num_passengers = -1;
            this->Depart = -1;
        }
    }
    void Train::set(const char* name, int num_passengers, int Departure) {
        set(name);
        set(num_passengers, Departure);
    }
    int Train::remaining(int passengers)
    {
        int remaning;
        remaning = (passengers - MAX_NO_OF_PASSENGERS);

        return remaning;

    }
    int Train::passenegrs_sum(int added_pass)
    {
        int total;
        total = num_passengers + added_pass;

        return total;

    }

    bool Train::load(int& left_behind)
    {
        int passengers;
        int total_passengers;
        std::cout << "Enter number of passengers boarding:" << std::endl;
        std::cout << "> ";
        std::cin >> passengers;
        total_passengers = passenegrs_sum(passengers);
        if (validnum_passengers(num_passengers + passengers))
        {
            num_passengers = total_passengers;
            return true;
        }
        else
        {
            left_behind = remaining(total_passengers);
            num_passengers = MAX_NO_OF_PASSENGERS;
            return false;
        }


    }
    bool Train::updateDepartureTime()
    {
        int new_time = 0;

        std::cout << "Enter new departure time:" << std::endl;
        std::cout << "> ";
        std::cin >> new_time;

        if (validTime(new_time))
        {
            this->Depart = new_time;
            return true;
        }
        else
        {
            Depart = -1;
            return false;
        }

    }
    bool Train::transfer(const Train& from)
    {
        char* combined_name;
        int total_passengers, passengers_left;
        if (isInvalid() || from.isInvalid())
        {
            return false;
        }


        combined_name = new char[strlen(name) + strlen(from.name) + 3];
        strcpy(combined_name, name);
        strcat(combined_name, ", ");
        strcat(combined_name, from.name);

        delete[] name;
        name = combined_name;
        total_passengers = passenegrs_sum(from.num_passengers);
        if (validnum_passengers(total_passengers))
        {
            num_passengers = total_passengers;
        }
        else
        {
            passengers_left = remaining(total_passengers);
            std::cout << "Train is full; " << passengers_left << " passengers of " << from.name << " could not be boarded!" << std::endl;
            num_passengers = MAX_NO_OF_PASSENGERS;
        }
        return true;
    }


    void Train::finalize() {
        delete[] name;
        name = nullptr;
        num_passengers = -1;
        Depart = -1;
    }

    bool Train::isInvalid() const {
        return (name == nullptr || num_passengers == -1 || Depart == -1);
    }


    int Train::getDepartureTime() const {
        return Depart;
    }


    void Train::display() const {
        if (!isInvalid()) {
            std::cout << "NAME OF THE TRAIN:    " << name << std::endl;
            std::cout << "NUMBER OF PASSENGERS: " << num_passengers << std::endl;
            std::cout << "DEPARTURE TIME:       " << std::setw(4) << std::setfill('0') << Depart << std::endl;
        }
        else {
            std::cout << "Train in an invalid State!" << std::endl;
        }
    }

}