#include "ClientOrd.h"

ClientOrd::ClientOrd(std::string n, std::string p, std::string o, float ts)
{
	this->name = n;
	this->phone = p;
	this->order = o;
	this->totalSum = ts;
}

std::string ClientOrd::getName()
{
	return this->name;
}

std::string ClientOrd::getPhone()
{
	return this->phone;
}

std::string ClientOrd::getOrder()
{
	return this->order;
}

float ClientOrd::getSum()
{
	return this->totalSum;
}