#pragma once
#include "NhanVien.h"
class NVHD :	public NhanVien
{
private:
	double luongCongNhatTheoNgay;
public:
	void setLuongTheoNgay(double luongTheoNgay);
	double getLuongTheoNgay();
	friend ostream& operator<<(ostream&, NVHD&);
	friend istream& operator >> (istream&, NVHD&);
	NVHD();
	~NVHD();
};

