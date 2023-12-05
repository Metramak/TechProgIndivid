#include "Expense.h"

Expense::Expense(std::string pr, std::string des, float s)
{
	this->prov = pr;
	this->descr = des;
	this->sum = s;
}

std::string Expense::getProv()
{
	return this->prov;
}

std::string Expense::getDescr()
{
	return this->descr;
}

float Expense::getSum()
{
	return this->sum;
}
