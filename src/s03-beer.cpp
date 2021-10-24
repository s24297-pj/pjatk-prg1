#include <iostream>

auto main(int argc, char* argv[]) -> int 
{
	if (argc == 1){
	int i = 99;
	for (auto x = i; x >= 0; x--){
	if (x != 0){
	std::cout << x <<" bottles of beer on the wall, "<< x <<" bottles of the beer.\n"<<"Take one down, pass it around, ";
	} else if (x == 0)
	std::cout << "No more bottles of the beer on the wall, no more bottles of beer. \n"<<"Go to the store and buy some more, "<< i <<" bottles of beer on the wall...\n";
	}
	} else {
	auto argv1 = std::string{argv[1]};
	int i = stoi(argv1); 
	for (auto x = i; x >= 0; x--){
	if (x != 0){
	std::cout << x <<" bottles of beer on the wall, "<< x <<" bottles of the beer.\n"<<"Take one down, pass it around, ";
	} else if (x == 0)
	std::cout << "No more bottles of the beer on the wall, no more bottles of beer. \n"<<"Go to the store and buy some more, "<< i <<" bottles of beer on the wall...\n";
	}}
	
	

	
}
