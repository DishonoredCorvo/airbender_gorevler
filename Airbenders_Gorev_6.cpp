
#define _USE_MATH_DEFINES // M_PI
#include <cmath>
#include <iostream>

int poly_count = 0; 

class RegularPolygon {

    
    int n;
    float angle;

public:
    RegularPolygon(int kenar) {
        n = kenar;
        angle = M_PI / kenar;
        poly_count ++;
    }

    float area(float knr_uzun) {

        float h = knr_uzun/(2*tan(angle));
        float alan = (h * knr_uzun / 2) * n;
        
        return alan;
    }

    float lenght(float S) {

        float knr = sqrt((4 * tan(angle) * S) / n);

        return knr;
    }

    ~RegularPolygon() {
        poly_count--;
    }
};


int main()
{
    RegularPolygon kare(4);
    std::cout << kare.area(12) << std::endl;
    std::cout << kare.lenght(144) << std::endl;

    RegularPolygon altigen(6);
    std::cout << altigen.area(15) << std::endl;
    std::cout << altigen.lenght(584) << std::endl;

    std::cout << poly_count; 
    
}
