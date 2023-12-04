#pragma once

#include "client.h"
#include "optic.h"
#include "ClientList.h"
class Menu
{
private:
	ClientList* ptrClientList;

	char selector;
	std::string tempName;
	std::string tempPhone;
	float tempLDiop;
	float tempRDiop;



public:
	Menu();
	~Menu();

	//Functions
	void interact();
};

