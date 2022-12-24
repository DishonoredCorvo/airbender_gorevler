#include <iostream>
#include <string>

struct Country;

struct Province {

	std::string name;
	Country* domain;
};

struct Country {

	std::string name;
	Province* capital;
};


int main() {
	
	Province Istanbul;
	Province Ankara;

	Ankara.name = "Ankara";
	Istanbul.name = "İstanbul";
	
	Country Turkey;

	Turkey.name = "Türkiye";
	Turkey.capital = &Ankara;

	Ankara.domain = &Turkey;
	Istanbul.domain = &Turkey;

	std::cout << (*Turkey.capital).name << std::endl;

	return 0;
}
