#pragma once
#include "optic.h"
class ClientOrd
{
private:
	std::string name;
	std::string phone;
	std::string order;

	float totalSum;

public:
	ClientOrd(std::string n, std::string p, std::string o, float ts);

	//Accessors
	std::string getName();
	std::string getPhone();
	std::string getOrder();

	float getSum();
};

