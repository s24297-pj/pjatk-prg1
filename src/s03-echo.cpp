#include <iostream>

auto main (int argc, char* argv[]) -> int
{	
	if (argc == 0){
	return 1;
	}
	
	if (std::string{argv[1]} == "-r" && std::string{argv[2]} == "-l"){
	int b = argc - 1;
	for (int i = argc; i > 1; i--) {
	auto a = std::string{argv[b]};
	std::cout<<a<<"\n";
	b--;
	}}
	else if (std::string{argv[1]} == "-l"){
	int b = 1;
	for (int i = argc; i > 1; i--) {
	auto a = std::string{argv[b]};
	std::cout<<a<<"\n";
	b++;
	}} else if (std::string{argv[1]} == "-r"){
	int b = argc - 1;
	for (int i = argc; i > 1; i--) {
	auto a = std::string{argv[b]};
	b--;
	std::cout<<a<<" ";
	} if (std::string{argv[2]} == "-n"){ std::cout<<" ";} else {std::cout<<"\n";}
	} else {
	int b = 1;
	for (int i = argc; i > 1; i--) {
	auto a = std::string{argv[b]};
	std::cout<<a<<" ";
	b++;
	}
	if (std::string{argv[1]} == "-n" || std::string{argv[2]} == "-n"){
	std::cout<<" ";
	} else {
	std::cout<<"\n";
	}
}}
