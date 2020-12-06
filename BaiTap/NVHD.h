#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "NhanVien.h"
#include <ctime>

class NVHD :	public NhanVien
{
private:
	double luongCongNhatTheoNgay;
public:
	void setLuongTheoNgay(double luongTheoNgay);
	double getLuongTheoNgay();
	double getLuongNV();
	bool kiemTraNamNhuan(int year);
	int getNumberDayInYear(int year);
	int TongSoNgay(int year);
	int TongSoNgayTinhTuDauNam(int year, int month);
	int SoNgayTrongThang(int thang, int nam);
	int TongSoNgayTinhDenHienTai(int day, int month, int year);
	bool checkDay(int day);
	friend ostream& operator<<(ostream&, NVHD&);
	friend istream& operator >> (istream&, NVHD&);
	NVHD();
	~NVHD();
};

