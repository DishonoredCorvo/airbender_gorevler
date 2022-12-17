
#include <vector>
#include <iostream>

template <typename T>

std::vector<std::vector<T>> matris_yap(T x, int satir, int sutun) {

    std::vector<std::vector<T>> matris;
    std::vector<T> satir_vec;

    for (int i = 0; i < sutun; i++) {
        satir_vec.push_back(x);
    }
    for (int j = 0; j < satir; j++) {
        matris.push_back(satir_vec);
    }

    return matris;
}

int main()
{
    
}


