#include <iostream>

enum Color { BLACK = 1, RED, METALLIC, WHITE, BILLIONAIRE };
enum Stage { BASE, FIRST, SECOND, THIRD };

struct Car {
    char *make{};
    char *model{};
    unsigned short volume{};
    unsigned short year{};
    size_t mileage{};
    Color car_color = Color::BLACK;
    Stage tuning_stage = Stage::BASE;

    Car(char *make, char *model, unsigned short volume, unsigned short year, size_t mileage, Color car_color);
    void foo();
    void tune_car();

};



#pragma region Constructor1
//    Car(char *_make,
//        char *_model,
//        unsigned short _volume,
//        unsigned short _year,
//        size_t _mileage,
//        Color _car_color) { // Конструктор структуры
//
//        make = _make;
//        model = _model;
//        volume = _volume;
//        year = _year;
//        mileage = _mileage;
//        car_color = _car_color;
//    }
#pragma endregion

