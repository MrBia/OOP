#pragma once
#include <iostream>

using namespace std;
class Date
{
private:
	int ngay;
	int thang;
	int nam;
public:
	void nhapNgay(int ngay);
	void nhapThang(int thang);
	void nhapNam(int nam);
	int xuatNgay();
	int xuatThang();
	int xuatNam();
	friend ostream& operator<<(ostream&, Date&);
	friend istream& operator >> (istream&, Date&);
	Date(int ngay, int thang, int nam);
	Date();
	~Date();
};

