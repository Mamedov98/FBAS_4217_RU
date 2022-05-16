#include <iostream>
#include "Car.h"
using namespace std;

void Car::tune_car() {
    switch (this->tuning_stage) {
        case BASE:
            this->tuning_stage = Stage::FIRST;
            break;
        case FIRST:
            this->tuning_stage = Stage::SECOND;
            break;
        case SECOND:
            this->tuning_stage = Stage::THIRD;
            break;
        case THIRD:
            cout << "Maximum tuning stage is already set..." << endl;
            break;
    }
}

#pragma region Contructor2

Car::Car(char *make, char *model, unsigned short volume, unsigned short year, size_t mileage,
         Color car_color) { // Конструктор структуры
    this->make = make;
    this->model = model;
    this->volume = volume;
    this->year = year;
    this->mileage = mileage;
    this->car_color = car_color;
}

#pragma endregion
