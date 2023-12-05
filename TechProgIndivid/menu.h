#pragma once

#include "optic.h"
#include "client.h"
#include "ClientList.h"
#include "DoctorAppList.h"
#include "DoctorApp.h"
#include "ClientOrd.h"
#include "ClientOrdList.h"
class Menu
{
private:
	ClientList* ptrClientList;
	DoctorAppList* ptrDoctAppList;
	ClientOrdList* ptrClientOrdList;

	int tMonth, tDay, tService;
	char selector;
	std::string tempName;
	std::string tempPhone;
	std::string tempDiop;
	std::string tempOrder;
	float tempLDiop;
	float tempRDiop;
	float tempOrderSum;



public:
	Menu();
	virtual ~Menu();

	//Functions
	void interact();
};

