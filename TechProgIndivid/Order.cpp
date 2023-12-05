#include "Order.h"

Order::Order(std::string n, std::string p, std::string o, int a, float ts)
{
	this->name = n;
	this->phone = p;
	this->order = o;
	this->amount = a;
	this->totalSum = ts;
}

std::string Order::getName()
{
	return this->name;
}

std::string Order::getPhone()
{
	return this->phone;
}

std::string Order::getOrder()
{
	return this->order;
}

int Order::getAmount()
{
	return this->amount;
}

float Order::getSum()
{
	return this->totalSum;
}
