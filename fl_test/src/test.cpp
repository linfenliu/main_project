#include <iostream>
#include "test_inc.h"


int main(size_t argc, char* argv[])
{
	std::cout << add(10, 50) << std::endl;

	std::cout << "press Enter to exit this cmd... " << std::endl;


	if (std::cin.get()){};

	return 0;
}