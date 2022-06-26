#include "PaperGarbage.h"
#include <iostream>

bool PaperGarbage::squeeze() {
	std::cout << "Is it squeezed? y/n\n";

	char choice;
	std::cin >> choice;
	if (choice == 'y' || choice == 'Y')
		return true;
	else
		return false;
}
