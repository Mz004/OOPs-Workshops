/***********************************************************************
// OOP244 Workshop #2 DIY (part 2):
//
// File  File.cpp
// Version 1.0
// Author   Fardad Soleimanloo
// Description
// To completed by students
// Revision History
// --------------------------------------------------------------------
// Name: Manav Zadafiya      Date 09-26-2023        Reason
***********************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <iomanip>
#include "Train.h"

namespace sdds {

    Train::Train() : name(nullptr), passengers(-1), departureTime(-1) {}

    Train::~Train() {
        finalize();
    }

    void Train::initialize() {
        //finalize();
        name = nullptr;
        passengers = -1;
        departureTime = -1;
    }

    bool Train::validTime(int value) const {
        int minutes = value % 100;
        return (value >= MIN_TIME && value <= MAX_TIME && minutes <= 59);
    }

    bool Train::validNoOfPassengers(int value) const {
        return (value > 0 && value <= MAX_NO_OF_PASSENGERS);
    }

    void Train::set(const char* name) {
        finalize();
        if (name && name[0] != '\0') {
            this->name = new char[strlen(name) + 1];
            strcpy(this->name, name);
        }
    }

    void Train::set(int noOfPassengers, int departure) {
        if (validNoOfPassengers(noOfPassengers) && validTime(departure)) {
            this->passengers = noOfPassengers;
            this->departureTime = departure;
        }
        else {
            this->passengers = -1;
            this->departureTime = -1;
        }
    }

    void Train::set(const char* name, int noOfPassengers, int departure) {
        set(name);
        set(noOfPassengers, departure);
    }

    void Train::finalize() {
        delete[] name;
        name = nullptr;
        passengers = -1;
        departureTime = -1;
    }

    bool Train::isInvalid() const {
        return (name == nullptr || passengers == -1 || departureTime == -1);
    }

    int Train::noOfPassengers() const {
        return passengers;
    }

    const char* Train::getName() const {
        return (name != nullptr) ? name : "Train in an invalid state";
    }

    int Train::getDepartureTime() const {
        return departureTime;
    }

    void Train::display() const {
        if (!isInvalid()) {
            std::cout << "NAME OF THE TRAIN:    " << name << std::endl;
            std::cout << "NUMBER OF PASSENGERS: " << passengers << std::endl;
            std::cout << "DEPARTURE TIME:       " << std::setw(4) << std::setfill('0') << departureTime << std::endl;
        }
        else {
            std::cout << "Train in an invalid State!" << std::endl;
        }
    }
}
