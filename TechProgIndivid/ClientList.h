#pragma once

#include "optic.h"
#include "client.h"

class ClientList
{
private:
	std::list <Client*> clientPtrList;
	std::list <Client*>::iterator iter;

public:

	~ClientList();

	void insertClient(Client*);
	float getDioptryByName(std::string);
	void showClientList();

};

