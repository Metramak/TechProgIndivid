#include "ExpenseList.h"

ExpenseList::~ExpenseList()
{
	while (!this->listPtrExpense.empty())
	{
		this->iter = this->listPtrExpense.begin();
		delete* this->iter;

		this->listPtrExpense.erase(this->iter);
	}
}

void ExpenseList::insertExpense(Expense* exp)
{
	this->listPtrExpense.push_back(exp);
}

void ExpenseList::showExpenseList()
{
	system("cls");
	std::cout << "||Назначение         ||Описание               || Сумма             ||\n";
	std::cout << "||-------------------||-----------------------||-------------------||\n";

	if (this->listPtrExpense.empty())
	{
		std::cout << "||          Записей нет          ||\n";
	}
	else
	{
		this->iter = this->listPtrExpense.begin();

		while (this->iter != this->listPtrExpense.end())
		{
			std::cout.width(3);
			std::cout << "|| ";

			std::cout.width(17);
			std::cout << (*iter)->getProv();

			std::cout.width(4);
			std::cout << " || ";

			std::cout.width(21);
			std::cout << (*iter)->getDescr();

			std::cout.width(4);
			std::cout << " || ";

			std::cout.width(17);
			std::cout << (*iter)->getSum();

			std::cout.width(4);
			std::cout << " ||\n";

			this->iter++;
		}
		std::cout << "||-------------------||-----------------------||-------------------||\n";
	}
	system("pause");
}
