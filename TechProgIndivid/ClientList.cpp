#include "ClientList.h"

ClientList::~ClientList()
{
	while (this->clientPtrList.empty())
	{
		this->iter = this->clientPtrList.begin();
		delete* this->iter;

		this->clientPtrList.erase(this->iter);
	}
}

void ClientList::insertClient(Client* clPtr)
{
	this->clientPtrList.push_back(clPtr);
}

float ClientList::getDioptryByName(std::string clName)
{
	float rDio, lDio;

	this->iter = this->clientPtrList.begin();

	while (this->iter != this->clientPtrList.end())
	{
		rDio = (*iter)->getrDioptry();
		lDio = (*iter)->getlDioptry();
		if (clName == ((*iter)->getName()))
			return rDio, lDio;
		this->iter++;
	}
	return -1;
}

void ClientList::showClientList()
{
	system("cls");
	std:: cout << "|| Имя Клиента               || Номер телефона       || Левая диоптрия || Правая диоптрия ||" << std::endl;
	std:: cout << "||---------------------------||----------------------||----------------||-----------------||" << std::endl;

	if (this->clientPtrList.empty())
	{
		std::cout << "||     Клиентов Нет     ||" << std::endl;
		system("pause");
	}
	else
	{
		this->iter = this->clientPtrList.begin();
		
		while (this->iter != this->clientPtrList.end())
		{
			std::cout.width(3);
			std::cout << "|| ";

			std::cout.width(25);
			std::cout << (*iter)->getName();

			std::cout.width(4);
			std::cout << " || ";

			std::cout.width(20);
			std::cout << (*iter)->getTel();

			std::cout.width(2);
			std::cout << " || ";

			std::cout.width(14);
			std::cout << (*iter)->getlDioptry();

			std::cout.width(2);
			std::cout << " || ";

			std::cout.width(15);
			std::cout << (*iter)->getrDioptry();

			std::cout.width(2);
			std::cout << " || \n`";
			
			this->iter++;
		}

		std::cout << "\n||---------------------------||----------------------||----------------||-----------------||\n";

		system("pause");
	}

}
