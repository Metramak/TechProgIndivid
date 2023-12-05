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
		std::cout << "Меню\n";

		std::cout << "1. Добавление нового клиента\n";
		std::cout << "2. Вывести всех клиентов\n\n";

		std::cout << "3. Добавить запись к врачу\n";
		std::cout << "4. Посмотреть записи\n\n";

		std::cout << "5. Изменить диоптрии клиента\n\n";

		std::cout << "6. Добавить покупку\n";
		std::cout << "7. Добавить расход\n\n";

		std::cout << "8. Вывести доходы\n";
		std::cout << "9. Вывести расходы\n\n";


		std::cin >> this->selector;

		switch (this->selector)
		{
		case '1':
			this->tempLDiop = 0;
			this->tempRDiop = 0;
			std::cout << "\nВведите ФИО нового клиента: ";
			std::cin.get();
			std::getline(std::cin, this->tempName);
			std::cout << "Введите телефон клиента: ";
			std::getline(std::cin, this->tempPhone);
			std::cout << "Введите диоптрии клиента (если известны) Лев Прав: ";
			std::cin >> this->tempLDiop >> this->tempRDiop;

			if (ptrClientList->checkClient(tempPhone) == -1)
			{
				std::cout << "\nКлиент с таким номером телефона уже есть в базе!\n\n";
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
			std::cout << "\nВведите имя клиента: ";
			std::cin.get();
			std::getline(std::cin, this->tempName);
			std::cout << "Введите телефон клиента: ";
			std::getline(std::cin, this->tempPhone);
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

			this->ptrDoctAppList->insertAppoint(new DoctorApp(this->tMonth, this->tDay, this->tService, this->tempName, this->tempPhone));
			break;
		case '4':
			this->ptrDoctAppList->showAppList();
			break;
		case '5':
			std::cout << "\nВведите телефон: ";
			std::cin.get();
			std::getline(std::cin, this->tempPhone);
			this->ptrClientList->getDioptryByPhone(tempPhone);
			break;
		case '6':
			std::cout << "\nИмя клиента: ";
			std::cin.get();
			std::getline(std::cin, this->tempName);
			std::cout << "Введите телефон: ";
			std::getline(std::cin, this->tempPhone);
			std::cout << "Введите заказ: ";
			std::getline(std::cin, this->tempOrder);
			std::cout << "Введите сумму: ";
			std::cin >> this->tempOrderSum;

			this->ptrClientOrdList->insertOrder(new ClientOrd(this->tempName, this->tempPhone, this->tempOrder, this->tempOrderSum));
			break;
		case '7':
			std::cout << "\nВведите назначение расхода: ";
			std::cin.get();
			std::getline(std::cin, this->tempExp);
			std::cout << "Введите описание: ";
			std::getline(std::cin, this->temDescr);
			std::cout << "Введите сумму: ";
			std::cin >> tempOrderSum;

			this->ptrExpenseList->insertExpense(new Expense(this->tempExp, this->temDescr, this->tempOrderSum));
			break;
		case '8':
			this->ptrClientOrdList->showOrderList();
			break;
		case '9':
			this->ptrExpenseList->showExpenseList();
			break;
		}
	}
}
