#include <iostream>
#include <string>



auto main(int argc, char* argv[]) -> int
{
   if (argc == 0) {
   	return 1;
   }
   auto const haslo1 = std::string{argv[1]};
   auto haslo2 = std::string{};
   do { 
   	std::cout<<"Password: ";
   	std::cin>>haslo2;
   if(haslo1 == haslo2){
   	std::cout<<"OK!\n";
   }
   }while (haslo1 != haslo2);
   return 0;
   }
