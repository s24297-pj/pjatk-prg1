#include <iostream>

auto main() -> int
{
	int rLiczba, odpowiedz;
	srand(time(NULL));
	rLiczba = rand() % 100 + 1;

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

