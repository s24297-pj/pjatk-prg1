#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
	if(argc == 0) {
	return 1;		
	}

	auto argv1 = std::string{argv[1]};
	int start = stoi(argv1);
	for(auto i = start; i >= 0; i--) {
	std::cout << i << "\n"; 
	}
}
