#pragma once
#include "optic.h"
#include "DoctorApp.h"
#include "ClientList.h"
class DoctorAppList
{
private:
	std::list <DoctorApp*> listPtrAppDoctor;
	std::list <DoctorApp*>::iterator iter;

public:
	virtual ~DoctorAppList();

	void insertAppoint(DoctorApp*);
	void showAppList();

};

