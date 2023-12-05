#pragma once
#include "menu.h"

class Order
{
private:
	std::string name;
	std::string phone;
	std::string order;

	int amount;
	float totalSum;

public:
	Order(std::string n, std::string p, std::string o, int a, float ts);

	//Accessors
	std::string getName();
	std::string getPhone();
	std::string getOrder();

	int getAmount();
	float getSum();
};

