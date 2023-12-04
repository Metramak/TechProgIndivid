#pragma once

#include "client.h"
#include "optic.h"
#include "ClientList.h"
class Menu
{
private:
	ClientList* ptrClientList;

	std::vector<DoctorApp*> vectPtrAppDoctor;
	std::vector<DoctorApp*>::iterator iter;

	int tMonth, tDay, tService;
	char selector;
	std::string tempName;
	std::string tempPhone;
	float tempLDiop;
	float tempRDiop;



public:
	Menu();
	virtual ~Menu();

	//Functions
	void interact();
};

