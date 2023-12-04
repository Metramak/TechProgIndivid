#include "menu.h"

Menu::Menu()
{
	ptrClientList = new ClientList;
}

Menu::~Menu()
{
	delete ptrClientList;
}

void Menu::interact()
{
	while (true)
	{
		system("cls");
		std::cout << "����\n";

		std::cout << "1. ���������� ������ �������\n";
		std::cout << "2. ������� ���� ��������\n\n";

		std::cin >> this->selector;

		switch (this->selector)
		{
		case '1':
			this->tempLDiop = 0;
			this->tempRDiop = 0;
			std::cout << "������� ��� ������ �������: ";
			std::cin >> this->tempName;
			std::cout << "������� ������� �������: ";
			std::cin >> this->tempPhone;
			std::cout << "������� �������� ������� (���� ��������) ��� ����: ";
			std::cin >> this->tempLDiop >> this->tempRDiop;
			
			ptrClientList->insertClient(new Client(this->tempName, this->tempPhone, this->tempLDiop, this->tempRDiop));

			break;
		case '2': 
			ptrClientList->showClientList();
			break;
		}
	}
}
