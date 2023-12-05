#pragma once
#include "optic.h"
#include "ClientOrd.h"
class ClientOrdList
{
private:
	std::list <ClientOrd*> listPtrOrder;
	std::list <ClientOrd*>::iterator iter;


public:
	virtual ~ClientOrdList();

	void insertOrder(ClientOrd*);
	void showOrderList();

};

