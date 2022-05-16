//#include <iostream>
//#include "Car.h"
//using namespace std;
//
//int main() {
//    system("Color 02");
//
//    auto *c1 = new Car { new char[]{"Mercedes"}, new char[]{"CLS 350"}, 3500, 2021, 0, Color::BLACK };
//
//    cout << c1->tuning_stage;
//    c1->tune_car();
//    cout << c1->tuning_stage;
//    c1->tune_car();
//    cout << c1->tuning_stage;
//    c1->tune_car();
//    cout << c1->tuning_stage;
//    c1->tune_car();
//
//    return 0;
//}


#include <iostream>
using namespace std;



struct Fraction {
    double numerator1;
    double  denominator1;
    double  numerator2;
    double  denominator2;

    double Sum() {

        double result{};

        result = (numerator1 / denominator1) + (numerator2 / denominator2);

        return result;
    }

    double Subtr() {

        double result{};

        result = numerator1 / denominator1 - numerator2 / denominator2;

        return result;
    }

    double Multip() {

        double result{};

        result = (numerator1 / denominator1) * (numerator2 / denominator2);

        return result;
    }


    double Divis() {

        double result{};

        result = (numerator1 / denominator1) / (numerator2 / denominator2);


        return result;
    }
}fr;

Fraction create_fr(unsigned int numerator1,
                   unsigned int denominator1,
                   unsigned int numerator2,
                   unsigned int denominator2) {

    Fraction* new_fr = new Fraction{};

    new_fr ->numerator1 = numerator1;
    new_fr ->denominator1 = denominator1;
    new_fr ->numerator2 = numerator2;
    new_fr ->denominator2 = denominator2;


    return *new_fr;

}

int main() {

    int numer1{}, denom1{}, numer2{}, denom2{};
    cout << "Enter numerator of fraction: ";
    cin >> numer1;
    cout << "\nEnter denominator of fraction: ";
    cin >> denom1;
    cout << "\nEnter numerator of fraction: ";
    cin >> numer2;
    cout << "\nEnter denominator of fraction: ";
    cin >> denom2;

    Fraction fr = create_fr(numer1, denom1, numer2, denom2);

    cout << "Sum of 2 fraction is " << fr.Sum() << endl;

//    cout << "Substraction of 2 fraction is " << fr.Subtr() << endl;
//    cout << "Multiplication of 2 fraction is " << fr.Multip() << endl;
//    cout << "Division of 2 fraction is " << fr.Divis() << endl;

    return 0;

}