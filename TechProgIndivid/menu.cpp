#include "menu.h"

Menu::Menu()
{
	this->ptrClientList = new ClientList;
	this->ptrDoctAppList = new DoctorAppList;
	this->ptrClientOrdList = new ClientOrdList;
	this->ptrExpenseList = new ExpenseList;

	this->tempName = "guest";
	this->tempPhone = "000";
	this->tempDiop = "null";
	this->tempOrder = "none";
	this->tempOrderSum = 0;

}

Menu::~Menu()
{
	delete ptrClientList;
	delete ptrDoctAppList;
	delete ptrClientOrdList;
	delete ptrExpenseList;
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

		std::cout << "6. �������� �������\n";
		std::cout << "7. �������� ������\n\n";

		std::cout << "8. ������� ������\n";
		std::cout << "9. ������� �������\n\n";

		std::cout << "0. ������� ������� �����\n\n";


		std::cin >> this->selector;

		switch (this->selector)
		{
		case '1':
			this->tempLDiop = 0;
			this->tempRDiop = 0;
			std::cout << "\n������� ��� ������ �������: ";
			std::cin.get();
			std::getline(std::cin, this->tempName);
			std::cout << "������� ������� �������: ";
			std::getline(std::cin, this->tempPhone);
			std::cout << "������� �������� ������� (���� ��������) ��� ����: ";
			std::cin >> this->tempLDiop >> this->tempRDiop;

			if (ptrClientList->checkClient(tempPhone) == -1)
			{
				std::cout << "\n������ � ����� ������� �������� ��� ���� � ����!\n\n";
				system("pause");
				break;
			}
			else
				ptrClientList->insertClient(new Client(this->tempName, this->tempPhone, this->tempLDiop, this->tempRDiop));
			break;
		case '2':
			ptrClientList->showClientList();
			break;
		case '3':
			std::cout << "\n������� ��� �������: ";
			std::cin.get();
			std::getline(std::cin, this->tempName);
			std::cout << "������� ������� �������: ";
			std::getline(std::cin, this->tempPhone);
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

			this->ptrDoctAppList->insertAppoint(new DoctorApp(this->tMonth, this->tDay, this->tService, this->tempName, this->tempPhone));
			break;
		case '4':
			this->ptrDoctAppList->showAppList();
			break;
		case '5':
			std::cout << "\n������� �������: ";
			std::cin.get();
			std::getline(std::cin, this->tempPhone);
			this->ptrClientList->getDioptryByPhone(tempPhone);
			break;
		case '6':
			std::cout << "\n��� �������: ";
			std::cin.get();
			std::getline(std::cin, this->tempName);
			std::cout << "������� �������: ";
			std::getline(std::cin, this->tempPhone);
			std::cout << "������� �����: ";
			std::getline(std::cin, this->tempOrder);
			std::cout << "������� �����: ";
			std::cin >> this->tempOrderSum;

			this->ptrClientOrdList->insertOrder(new ClientOrd(this->tempName, this->tempPhone, this->tempOrder, this->tempOrderSum));
			break;
		case '7':
			std::cout << "\n������� ���������� �������: ";
			std::cin.get();
			std::getline(std::cin, this->tempExp);
			std::cout << "������� ��������: ";
			std::getline(std::cin, this->temDescr);
			std::cout << "������� �����: ";
			std::cin >> tempOrderSum;

			this->ptrExpenseList->insertExpense(new Expense(this->tempExp, this->temDescr, this->tempOrderSum));
			break;
		case '8':
			this->ptrClientOrdList->showOrderList();
			break;
		case '9':
			this->ptrExpenseList->showExpenseList();
			break;
		case '0':
			tempOrderSum = ptrClientOrdList->countSum();
			std::cout << "\n������� �����: " << tempOrderSum << "\n";
			tempExpSum = ptrExpenseList->countSum();
			std::cout << "������� �������: " << tempExpSum << "\n\n";
			if (tempOrderSum - tempExpSum >= 0)
				std::cout << "���� ����: +" << tempOrderSum - tempExpSum << "\n\n";
			else
				std::cout << "���� ����: " << tempOrderSum - tempExpSum << "\n\n";
			system("pause");
			break;
		}
	}
}
