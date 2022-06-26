#include "PlasticGarbage.h"
#include <iostream>

bool PlasticGarbage::clean() {
	std::cout << "Is it clean? y/n\n";

	char choice;
	std::cin >> choice;
	if (choice == 'y' || choice == 'Y')
		return true;
	else
		return false;
}