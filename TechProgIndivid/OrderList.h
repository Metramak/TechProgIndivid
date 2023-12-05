#pragma once

#include "Order.h"
#include "optic.h"
#include "menu.h"


class OpticOrderList
{
private:
	std::list <ClOrder*> listPtrOrder;
	std::list <ClOrder*>::iterator iter;


public:
	virtual ~OpticOrderList();

	void insertOrder(ClOrder*);
	void showOrderList();

};

