#include <iostream>

auto main(int argc, char* argv[]) -> int
{
	if(argc == 0){
		return 1;
	}
	auto x = std::string{argv[1]};
	int liczba = stoi(x);
	int start = 1;

	for (auto i = start; i <= liczba; i++) {
		if(i % 3 == 0 && i % 5 == 0) {
		std::cout<<i<<" FizzBuzz\n";
	} else if (i % 5 == 0) {
		std::cout<<i<<" Buzz\n";
	} else if (i % 3 == 0){
		std::cout<<i<<" Fizz\n";
	}
	}
}
