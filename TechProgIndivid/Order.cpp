#include "Order.h"

ClOrder::ClOrder(std::string n, std::string p, std::string o, float ts)
{
	this->name = n;
	this->phone = p;
	this->order = o;
	this->totalSum = ts;
}

std::string ClOrder::getName()
{
	return this->name;
}

std::string ClOrder::getPhone()
{
	return this->phone;
}

std::string ClOrder::getOrder()
{
	return this->order;
}

float ClOrder::getSum()
{
	return this->totalSum;
}
