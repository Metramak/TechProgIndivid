#include "DoctorAppList.h"
#include "DoctorApp.h"

DoctorAppList::~DoctorAppList()
{
	while (!this->listPtrAppDoctor.empty())
	{
		this->iter = this->listPtrAppDoctor.begin();
		delete* this->iter;

		this->listPtrAppDoctor.erase(this->iter);
	}
}


void DoctorAppList::insertAppoint(DoctorApp* appoint)
{
	this->listPtrAppDoctor.push_back(appoint);
}

void DoctorAppList::showAppList()
{
	system("cls");
	std::cout << "|| ���� �/�    ||���             || �������          || ������                 ||\n";
	std::cout << "||-------------||----------------||------------------||------------------------||\n";

	if (this->listPtrAppDoctor.empty())
	{
		std::cout << "||    ������� ���      ||\n";
	}
	else
	{
		this->iter = this->listPtrAppDoctor.begin();

		while(this->iter != this->listPtrAppDoctor.end())
		{
			std::cout.width(3);
			std::cout << "|| ";

			std::cout.width(3);
			std::cout << (*iter)->getMonth();

			std::cout.width(3);
			std::cout << (*iter)->getDay();

			std::cout.width(9);
			std::cout << " || ";

			std::cout.width(14);
			std::cout << (*iter)->getName();

			std::cout.width(4);
			std::cout << " || ";

			std::cout.width(16);
			std::cout << (*iter)->getPhone();

			std::cout.width(4);
			std::cout << " || ";

			std::cout.width(21);
			switch ((*iter)->getService())
			{
			case 1:
				std::cout << "������������";
				break;

			case 2:
				std::cout << "���������";
				break;
			case 3:
				std::cout << "�������� ������";
				break;
			case 4:
				std::cout << "���������";
				break;
			}

			std::cout.width(5);
			std::cout << " ||\n";

			this->iter++;

		}
		std::cout << "||-------------||----------------||------------------||------------------------||\n";
	}
	system("pause");
}
