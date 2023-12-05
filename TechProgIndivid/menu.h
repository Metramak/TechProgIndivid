#pragma once

#include "client.h"
#include "optic.h"
#include "ClientList.h"
#include "DoctorAppList.h"
#include "DoctorApp.h"
#include "Order.h"
class Menu
{
private:
	ClientList* ptrClientList;
	DoctorAppList* ptrDoctAppList;

	int tMonth, tDay, tService;
	char selector;
	std::string tempName;
	std::string tempPhone;
	std::string tempDiop;
	float tempLDiop;
	float tempRDiop;



public:
	Menu();
	virtual ~Menu();

	//Functions
	void interact();
};

