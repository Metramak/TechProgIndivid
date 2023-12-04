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
	DoctorApp(int m, int d, int s, std::string nam, std::string ph) : month(m), day(d), service(s), name(nam), phone(ph)
	{

	}



};

