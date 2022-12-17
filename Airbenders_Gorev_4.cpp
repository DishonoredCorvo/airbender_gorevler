#include <iostream>
#include <string>

struct Province {

	std::string name;
	std::string* domain;
}  ;

struct Country {

	std::string name;
	Province* capital;
}  ;



int main() {
	

	Province Istanbul;
	Province Ankara;

	Ankara.name = "Ankara";
	Istanbul.name = "Ýstanbul";
	
	Country Turkey;

	Turkey.name = "Türkiye";
	Turkey.capital = &Ankara;

	Ankara.domain = &(Turkey.name);
	Istanbul.domain = &(Turkey.name);

	std::cout << (*Turkey.capital).name << std::endl;

	return 0;
}