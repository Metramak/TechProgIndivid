#pragma once

#include "optic.h"

class Client
{
private:
	std::string name;
	std::string phone;
	float lDioptry;
	float rDioptry;

public:
	Client(std::string n, std::string tel, float l_dio, float r_dio);
	~Client();

	//Accessors
	std::string getName();
	std::string getTel();
	float getlDioptry();
	float getrDioptry();

	//Functions
	void changeDioptry(float new_ldioptry, float new_rdioptry);
	
};

