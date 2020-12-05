#include "NVBC.h"



void NVBC::setHSL(double hsl)
{
	this->heSoLuong = hsl;
}

double NVBC::getHSL()
{
	return this->heSoLuong;
}

void NVBC::setTNLV(double tnlv)
{
	this->thamNienLamViec = tnlv;
}

double NVBC::getTNLV()
{
	return this->thamNienLamViec;
}

double NVBC::getLuongNV()
{
	double luong = (this->heSoLuong * 1390000) * (1 + this->thamNienLamViec);
	return luong;
}

NVBC::NVBC()
{
}


NVBC::~NVBC()
{
}

ostream & operator<<(ostream &o, NVBC &nvbc)
{
	o << "Ma so NV: " << nvbc.getMaNV() << "\n";
	o << "Ten NV: " << nvbc.getTenNV() << "\n";
	o << "Gioi tinh: " << ((nvbc.getGioiTinhNV()) ? "Nam" : "Nu") << "\n";
	o << "Luong: " << nvbc.getLuongNV() << "\n";
	o << "Ngay Bat Dau: " << nvbc.getNgayBatDau() << "\n";
	o << "He So Luong: " << nvbc.heSoLuong << "\n";
	o << "Tham Nien Lam Viec: " << nvbc.thamNienLamViec << "\n";

	return o;
	// TODO: insert return statement here
}

istream & operator >> (istream &i, NVBC &nvbc)
{
	return i;
	// TODO: insert return statement here
}
