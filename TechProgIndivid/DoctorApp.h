#pragma once
#include "optic.h"

class DoctorApp
{
private:
	int month, day;
	int service;
	std::string name;
	std::string phone;

public:

	DoctorApp(int m, int d, int s, std::string nam, std::string ph);

	//Accessors

	int getMonth();
	int getDay();
	int getService();
	std::string getName();
	std::string getPhone();

};

