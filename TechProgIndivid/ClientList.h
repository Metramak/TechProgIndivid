#pragma once

#include "optic.h"
#include "client.h"

class ClientList
{
private:
	std::list <Client*> clientPtrList;
	std::list <Client*>::iterator iter;

public:

	virtual ~ClientList();

	void insertClient(Client*);
	float getDioptryByName(std::string);
	std::string getNameByPhone(std::string);
	void showClientList();

};

