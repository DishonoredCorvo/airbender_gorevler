// 1/2 gt2
#include <iostream>
#define G 9.80665

int main()
{

    double distance, t;

    std::cout << "lutfen gecen sureyi saniye cinsinden giriniz \n";
    std::cin >> t;
    distance = (t * t * G) / 2;
    std::cout << "cismin aldigi yol: " << distance << "metre";

}
