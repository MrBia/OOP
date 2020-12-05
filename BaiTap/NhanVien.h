#pragma once
#include <iostream>
#include "Date.h"
#include <string>

using namespace std;
class NhanVien
{
private:
	string maNV;
	string tenNV;
	Date ngayBatDauLamViec;
	bool gioiTinh;
	double luong;
public:
	void setMaNV(string maNV);
	string getMaNV();
	void setTenNV(string tenNV);
	string getTenNV();
	void setGoiTinhNV(bool gioiTinhNV);
	bool getGioiTinhNV();
	//void setLuongNV(double luongNV);
	double getLuongNV();
	void setNgayBatDau(Date ngayBatDau);
	Date getNgayBatDau();

	friend ostream& operator<<(ostream&, NhanVien&);
	NhanVien();
	~NhanVien();
};

