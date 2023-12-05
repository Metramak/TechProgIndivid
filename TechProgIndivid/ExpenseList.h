#pragma once
#include "optic.h"
#include "Expense.h"
class ExpenseList
{
private:
	std::list <Expense*> listPtrExpense;
	std::list <Expense*>::iterator iter;
public:
	virtual ~ExpenseList();

	void insertExpense(Expense*);
	void showExpenseList();
};

