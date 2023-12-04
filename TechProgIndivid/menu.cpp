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
		std::cout << "Меню\n";

		std::cout << "1. Добавление нового клиента\n";
		std::cout << "2. Вывести всех клиентов\n\n";

		std::cin >> this->selector;

		switch (this->selector)
		{
		case '1':
			this->tempLDiop = 0;
			this->tempRDiop = 0;
			std::cout << "Введите ФИО нового клиента: ";
			std::cin >> this->tempName;
			std::cout << "Введите телефон клиента: ";
			std::cin >> this->tempPhone;
			std::cout << "Введите диоптрии клиента (если известны) Лев Прав: ";
			std::cin >> this->tempLDiop >> this->tempRDiop;
			
			ptrClientList->insertClient(new Client(this->tempName, this->tempPhone, this->tempLDiop, this->tempRDiop));

			break;
		case '2': 
			ptrClientList->showClientList();
			break;
		}
	}
}
