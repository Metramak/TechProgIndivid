#include "ClientList.h"

ClientList::~ClientList()
{
	while (!this->clientPtrList.empty())
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

void ClientList::getDioptryByPhone(std::string clPhone)
{
	float rDio, lDio;
	std::string nameDio;
	std::string name;

	this->iter = this->clientPtrList.begin();

	while (this->iter != this->clientPtrList.end())
	{
		rDio = (*iter)->getrDioptry();
		lDio = (*iter)->getlDioptry();
		name = (*iter)->getName();

		if (clPhone == ((*iter)->getTel()))
		{
			std::cout << "Имя клиента: " << name;
			std::cout << "\nДиоптрии: " << rDio << " " << lDio;

			std::cout << "\nВведите новые диоптрии (Л/П): ";
			std::cin >> rDio >> lDio;
			(*iter)->changeDioptry(rDio, lDio);
			break;
		}
		this->iter++;
	}

	std::cout << "\nКлиент не найден!\n\n";
	system("pause");
}

std::string ClientList::getNameByPhone(std::string clPhone)
{
	std::string name;
	this->iter != this->clientPtrList.begin();

	while (this->iter != this->clientPtrList.end())
	{
		name = (*iter)->getName();
		if (clPhone == ((*iter)->getTel()))
			return name;
		this->iter++;
	}
	return "none";
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
			std::cout << " || ";
			
			this->iter++;
		}

		std::cout << "\n||---------------------------||----------------------||----------------||-----------------||" << std::endl;

		system("pause");
	}

}

