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
		std::cout << "Меню\n";

		std::cout << "1. Добавление нового клиента\n";
		std::cout << "2. Вывести всех клиентов\n\n";

		std::cout << "3. Добавить запись к врачу\n";
		std::cout << "4. Посмотреть записи\n\n";

		std::cout << "5. Изменить диоптрии клиента\n\n";

		std::cin >> this->selector;

		switch (this->selector)
		{
		case '1':
			this->tempLDiop = 0;
			this->tempRDiop = 0;
			std::cout << "\nВведите ФИО нового клиента: ";
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
		case '3':
			std::cout << "\nВведите имя клиента: ";
			std::cin >> this->tempName;
			std::cout << "Введите телефон клиента: ";
			std::cin >> this->tempPhone;
			do {
				std::cout << "Выберите услугу\n1-Консультация\n2-Повторный прием\n3-Проверка зрения\n4-Коррекция зрения\n";
				std::cin >> this->tService;
			} while (this->tService < 0 || this->tService > 4);
			do {
				std::cout << "Введите месяц: ";
				std::cin >> this->tMonth;
			} while (this->tMonth < 0 || this->tMonth > 12);
			do {
				std::cout << "Введите день: ";
				std::cin >> this->tDay;
			} while (this->tDay < 0 || this->tDay > 31);

			ptrDoctAppList->insertAppoint(new DoctorApp(this->tMonth, this->tDay, this->tService, this->tempName, this->tempPhone));
			break;
		case '4':
			ptrDoctAppList->showAppList();
			break;
		case '5':
			std::cout << "\nВведите телефон: ";
			std::cin >> tempPhone;
			ptrClientList->getDioptryByPhone(tempPhone);
			break;

		}
	}
}
