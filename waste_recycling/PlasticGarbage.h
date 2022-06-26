#pragma once
#include <string>
#include "Garbage.h"

class PlasticGarbage :public Garbage
{
	bool isClean;

public:
	bool clean();
};

