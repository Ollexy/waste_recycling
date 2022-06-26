#pragma once
#include <string>
#include "Garbage.h"

class PaperGarbage:public Garbage
{
	bool isSqueezed;

public:
	bool squeeze();
};

