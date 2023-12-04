#include <iostream>
#include "menu.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Menu menu;

	menu.interact();

	return 0;
}