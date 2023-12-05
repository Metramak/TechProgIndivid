#pragma once
#include "menu.h"

class OrderList
{
private:
	std::list <Order*> listPtrOrder;
	std::list <Order*>::iterator iter;


public:
	virtual ~OrderList();

	void insertOrder();
	void showOrderList();

};

