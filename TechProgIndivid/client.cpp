#include "Client.h"

Client::Client(std::string n, std::string tel, float l_dio, float r_dio)
{
	this->name = n;
	this->phone = tel;
	this->lDioptry = l_dio;
	this->rDioptry = r_dio;
}

Client::~Client()
{
}

std::string Client::getName()
{
	return this->name;
}

std::string Client::getTel()
{
	return this->phone;
}

float Client::getlDioptry()
{
	return this->lDioptry;
}

float Client::getrDioptry()
{
	return this->rDioptry;
}


void Client::changeDioptry(float new_ldioptry, float new_rdioptry)
{
	this->lDioptry = new_ldioptry;
	this->rDioptry = new_rdioptry;
}
