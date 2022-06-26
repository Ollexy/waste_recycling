#pragma once
#include <string>
//deklaracje, to co bedzie uzywane

class Garbage {
private:
	std::string name;
public:
	Garbage();
	void getGarbageName();
	void setGarbageName(std::string garbageName);
};
