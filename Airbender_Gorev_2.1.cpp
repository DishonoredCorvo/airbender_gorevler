

#include <iostream>
#include <vector>
#include <cmath>

double mean(std::vector<double> data) { // aritmetik ortalama

    double vec_data_sayisi = data.size();
    double vec_data_top { 0 };
    
    for (int i = 0; i < vec_data_sayisi; i++) {

        vec_data_top = vec_data_top + data.at(i);
    }

    double ar_ort = vec_data_top / vec_data_sayisi;

    return ar_ort;


}

double stddev(std::vector<double> data) { //standart sapma

    double vec_data_sayisi = data.size();
    double vec_data_top{ 0 };

    for (int i = 0; i < vec_data_sayisi; i++) {

        vec_data_top = vec_data_top + data.at(i);
    }

    double ar_ort = vec_data_top / vec_data_sayisi;
    double stan_sap_kare_topl{ 0 };


    for (int i = 0; i < vec_data_sayisi; i++) {

        stan_sap_kare_topl = stan_sap_kare_topl + (data.at(i) - ar_ort) * (data.at(i) - ar_ort);
    }

    double stan_sapma = sqrt(stan_sap_kare_topl / (vec_data_sayisi - 1));

    return stan_sapma;
    

}




int main()
{
    
    std::vector <double> test_vec{ 10,24,32,73,49,54,165 }; //test vektörü


    std::cout << "aritmetik ortalama: " << mean(test_vec) << std::endl;
    std::cout << "standart sapma: " << stddev(test_vec) << std::endl;
} 

