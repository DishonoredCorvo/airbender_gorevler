// 1/2 gt2

#include <iostream>

int main()
{
    
    double yol,sure,g_ivmesi;

    g_ivmesi = 9.80665;

    std::cout << "lutfen gecen sureyi saniye cinsinden giriniz \n";
    std::cin >> sure;
    yol = (sure * sure * g_ivmesi) / 2;
    std::cout << "cismin aldigi yol: " << yol << "metre";
    


}
