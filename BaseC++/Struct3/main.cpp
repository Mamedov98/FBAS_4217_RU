#include <iostream>

using namespace std;



// Сущность, которая описывает прямоугольник

//struct Square {
//    float x;
//    float y;
//    float *sides{};
//};




int main() {

# pragma  region WithoutStruct

//    auto **x_coord = new float*[3]{new float(5), new float(7), new float(9)};
//    auto **y_coord = new float*[3]{new float(5), new float(7), new float(9)};
//
//
//    auto **sides = new float *[3]{
//            new float[4]{2, 7, 4, 4},
//            new float[4]{3, 3, 5, 5},
//            new float[4]{4, 4, 6, 6}
//    };
//
//
//    auto **squares = new float*[3] {
//            new float[] {*x_coord[0], *y_coord[0], *sides[0]},
//            new float[] {*x_coord[1], *y_coord[1], *sides[1]},
//            new float[] {*x_coord[2], *y_coord[2], *sides[2]},
//    };
# pragma endregion

#pragma region WithStructs

//    auto *my_square = new Square[3]{};
//
//
//    my_square[0].sides = new float[4] {2, 2, 4, 4};
//
//    for (int i = 0; i < 4; ++i) {
//        cout << my_square[0].sides[i] << ' ';
//    }

#pragma endregion




    return 0;
}

