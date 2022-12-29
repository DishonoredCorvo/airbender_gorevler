
#include <iostream>
#include <vector>
#include <stdlib.h>

int main(int argc, char* args[])
{
	double katsayi = std::atof(args[1]);
	int row_count = std::atoi(args[2]);
	int column_count = (argc - 3)/row_count;

	std::vector<double> sayi_dizisi;
	std::vector<std::vector<double>> matrix;

	int n = 3;

	for (int i = 0; i < row_count; i++) {

		for (int j = 0; j < column_count; j++) {

			if (i == 0) {
				sayi_dizisi.push_back(atof(args[n])*katsayi);
			}
			else {
				sayi_dizisi.push_back(atof(args[n]));
			}
			n++;
		}
		matrix.push_back(sayi_dizisi);
		sayi_dizisi.clear();
	}

	for (int r = 0; r < row_count; r++) {
		for (int c = 0; c < column_count; c++) {
			std::cout << matrix[r][c] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
