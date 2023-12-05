#include "menu.h"

Menu::Menu()
{
	ptrClientList = new ClientList;
	ptrDoctAppList = new DoctorAppList;
}

Menu::~Menu()
{
	delete ptrClientList;
	delete ptrDoctAppList;
}

void Menu::interact()
{
	while (true)
	{
		system("cls");
		std::cout << "����\n";

		std::cout << "1. ���������� ������ �������\n";
		std::cout << "2. ������� ���� ��������\n\n";

		std::cout << "3. �������� ������ � �����\n";
		std::cout << "4. ���������� ������\n\n";

		std::cout << "5. �������� �������� �������\n\n";

		std::cin >> this->selector;

		switch (this->selector)
		{
		case '1':
			this->tempLDiop = 0;
			this->tempRDiop = 0;
			std::cout << "\n������� ��� ������ �������: ";
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
		case '3':
			std::cout << "\n������� ��� �������: ";
			std::cin >> this->tempName;
			std::cout << "������� ������� �������: ";
			std::cin >> this->tempPhone;
			do {
				std::cout << "�������� ������\n1-������������\n2-��������� �����\n3-�������� ������\n4-��������� ������\n";
				std::cin >> this->tService;
			} while (this->tService < 0 || this->tService > 4);
			do {
				std::cout << "������� �����: ";
				std::cin >> this->tMonth;
			} while (this->tMonth < 0 || this->tMonth > 12);
			do {
				std::cout << "������� ����: ";
				std::cin >> this->tDay;
			} while (this->tDay < 0 || this->tDay > 31);

			ptrDoctAppList->insertAppoint(new DoctorApp(this->tMonth, this->tDay, this->tService, this->tempName, this->tempPhone));
			break;
		case '4':
			ptrDoctAppList->showAppList();
			break;
		case '5':
			std::cout << "\n������� �������: ";
			std::cin >> tempPhone;
			ptrClientList->getDioptryByPhone(tempPhone);
			break;

		}
	}
}
