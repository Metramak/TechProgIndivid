#pragma once

#include "optic.h"
#include "client.h"
#include "ClientList.h"
#include "DoctorAppList.h"
#include "DoctorApp.h"
#include "ClientOrd.h"
#include "ClientOrdList.h"
#include "Expense.h"
#include "ExpenseList.h"
class Menu
{
private:
	ClientList* ptrClientList;
	DoctorAppList* ptrDoctAppList;
	ClientOrdList* ptrClientOrdList;
	ExpenseList* ptrExpenseList;

	int tMonth, tDay, tService;
	char selector;
	std::string tempName;
	std::string tempPhone;
	std::string tempDiop;
	std::string tempOrder;
	std::string tempExp;
	std::string temDescr;
	float tempLDiop;
	float tempRDiop;
	float tempOrderSum;
	float tempExpSum;



public:
	Menu();
	virtual ~Menu();

	//Functions
	void interact();
};

