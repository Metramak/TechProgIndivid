#pragma once
#include "menu.h"
#include "optic.h"
#include "OrderList.h"

class ClOrder
{
private:
	std::string name;
	std::string phone;
	std::string order;

	float totalSum;

public:
	ClOrder(std::string n, std::string p, std::string o, float ts);

	//Accessors
	std::string getName();
	std::string getPhone();
	std::string getOrder();

	float getSum();
};

