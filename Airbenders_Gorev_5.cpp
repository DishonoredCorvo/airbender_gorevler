
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
    
    std::fstream myfile;
    std::vector<int> b_txt;

    myfile.open("b.txt", std::ios::in);

    if (!myfile.is_open()) {
        std::cout << "b.txt not opened";
        exit;
    }
    std::string line;
    int N_count = 0;

    while (std::getline(myfile, line)) {
        N_count ++ ;
    }

    int eleman;

    myfile.clear();
    myfile.seekg(0, std::ios::beg);

    if (!myfile.is_open()) {
        std::cout << "b.txt not opened";
        exit;
    }

    for (int i = 0; i < N_count;i++) {
        
        myfile >> eleman;
        b_txt.push_back(eleman);

    }

    
    for (int i = 0; i < b_txt.size(); i++) {

        std::cout << b_txt.at(i) << std::endl;
    }

    myfile.close();

    std::vector<std::vector<int>> A_txt;
    std::vector<int> row;

    myfile.open("A.txt", std::ios::in);

    if (!myfile.is_open()) {
        std::cout << "A.txt not opened";
        exit;
    }
     
    for (int r = 0; r < N_count; r++) {
        for (int c = 0; c < N_count; c++) {
            myfile >> eleman;
            
            row.push_back(eleman);

        }
        A_txt.push_back(row);
        row.resize(0);
    }

    for (int r = 0; r < A_txt.size(); r++) {

        for (int c = 0; c < A_txt.at(0).size(); c++) {
            std::cout << A_txt.at(r).at(c) << " ";
        }
        std::cout << "\n";
    }
}

