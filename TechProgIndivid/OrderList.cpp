#include "OrderList.h"

OpticOrderList::~OpticOrderList()
{
	while (!this->listPtrOrder.empty())
	{
		this->iter = this->listPtrOrder.begin();
		delete* this->iter;

		this->listPtrOrder.erase(this->iter);
	}
}

void OpticOrderList::insertOrder(ClOrder* order)
{
	this->listPtrOrder.push_back(order);
}

void OpticOrderList::showOrderList()
{
	system("cls");
	std::cout << "||Имя            ||Телефон           || Заказ                     || Сумма         ||\n";
	std::cout << "||---------------||------------------||---------------------------||---------------||\n";

	if (this->listPtrOrder.empty())
	{
		std::cout << "||    Заказов нет     ||\n";
	}
	else
	{
		this->iter = this->listPtrOrder.begin();

		while (this->iter != this->listPtrOrder.end())
		{
			std::cout.width(3);
			std::cout << "|| ";

			std::cout.width(15);
			std::cout << (*iter)->getName();

			std::cout.width(4);
			std::cout << " || ";

			std::cout.width(3);
			std::cout << (*iter)->getPhone();

			std::cout.width(9);
			std::cout << " || ";

			std::cout.width(14);
			std::cout << (*iter)->getOrder();

			std::cout.width(4);
			std::cout << " || ";

			std::cout.width(16);
			std::cout << (*iter)->getSum();

			std::cout.width(4);
			std::cout << " ||\n";

			this->iter++;

		}
		std::cout << "||---------------||------------------||---------------------------||---------------||\n";
	}
	system("pause");
}
