#include <iostream>
#include <random>
#include <string>



auto main() -> int
{
	auto rd = std::random_device{};
	auto d = std::uniform_int_distribution<int>{1, 100};
	int rLiczba, odpowiedz;
	rLiczba = d(rd);

	do {
		std::cout<<"Guess the number: ";
		std::cin>> odpowiedz;
	if(odpowiedz<rLiczba){
		std::cout<<"Number too small!\n";
	} else if(odpowiedz>rLiczba){
		std::cout<<"Number too big!\n";
	}
	}while (rLiczba != odpowiedz);
		std::cout<<"Just right!\n";
	return 0;

}

