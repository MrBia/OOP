#include "Date.h"



void Date::nhapNgay(int ngay)
{
	this->ngay = ngay;
}

void Date::nhapThang(int thang)
{
	this->thang = thang;
}

void Date::nhapNam(int nam)
{
	this->nam = nam;
}

int Date::xuatNgay()
{
	return this->ngay;
}

int Date::xuatThang()
{
	return this->thang;
}

int Date::xuatNam()
{
	return this->nam;
}

Date::Date(int ngay, int thang, int nam)
{
	this->ngay = ngay;
	this->thang = thang;
	this->nam = nam;
}

Date::Date()
{
}


Date::~Date()
{
}

ostream & operator<<(ostream &o, Date &date)
{
	o << "date " << date.ngay << "/" << "month " << date.thang << "/" << "year " << date.nam << "\n";
	return o;
	// TODO: insert return statement here
}

istream & operator >> (istream &i, Date &date)
{
	cout << "Ngay: ";
	i >> date.ngay;
	cout << "Thang: "; 
	i >> date.thang;
	cout << "Nam: ";
	i >> date.nam;
	
	return i;
	// TODO: insert return statement here
}
