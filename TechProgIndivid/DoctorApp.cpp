#include "DoctorApp.h"

DoctorApp::DoctorApp(int m, int d, int s, std::string nam, std::string ph)
{
	this->month = m;
	this->day = d;
	this->service = s;
	this->name = nam;
	this->phone = ph;
}

int DoctorApp::getMonth()
{
	return this->month;
}

int DoctorApp::getDay()
{
	return this->day;
}

int DoctorApp::getService()
{
	return this->service;
}

std::string DoctorApp::getName()
{
	return this->name;
}

std::string DoctorApp::getPhone()
{
	return this->phone;
}
