#include "OrderList.h"

OrderList::~OrderList()
{
	while (!this->listPtrOrder.empty())
	{
		this->iter = this->listPtrOrder.begin();
		delete* this->iter;

		this->listPtrOrder.erase(this->iter);
	}
}

void OrderList::insertOrder()
{
}

void OrderList::showOrderList()
{
}
