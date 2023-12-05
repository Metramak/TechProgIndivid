#pragma once
#include "optic.h"
class Expense
{
private:
	std::string prov;
	std::string descr;
	float sum;
public:
	Expense(std::string pr, std::string des, float s);

	//Accessors
	std::string getProv();
	std::string getDescr();
	float getSum();

};

