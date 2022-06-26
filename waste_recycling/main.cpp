#include <iostream>
#include "Garbage.h"
#include "PaperGarbage.h"
#include "PlasticGarbage.h"

int main()
{
	Garbage smiec;
	std::cout << "Nazwa smiecia to: " << std::endl;
	smiec.getGarbageName();
	smiec.setGarbageName("puszka");
	std::cout << "Nazwa smiecia to: " << std::endl;
	smiec.getGarbageName();

}