#pragma once

#include "client.h"
#include "optic.h"
#include "ClientList.h"
#include "DoctorAppList.h"
#include "DoctorApp.h"
#include "Order.h"
#include "OrderList.h"
class Menu
{
private:
	ClientList* ptrClientList;
	DoctorAppList* ptrDoctAppList;
	OpticOrderList* ptrOrderList;

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

