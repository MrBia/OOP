#include "NVHD.h"



void NVHD::setLuongTheoNgay(double luongTheoNgay)
{
	this->luongCongNhatTheoNgay = luongTheoNgay;
}

double NVHD::getLuongTheoNgay()
{
	return this->luongCongNhatTheoNgay;
}

NVHD::NVHD()
{
}


NVHD::~NVHD()
{
}

ostream & operator<<(ostream &o, NVHD &nvhd)
{
	o << "Ma so NV: " << nvhd.getMaNV() << "\n";
	o << "Ten NV: " << nvhd.getTenNV() << "\n";
	o << "Gioi tinh: " << ((nvhd.getGioiTinhNV()) ? "Nam" : "Nu") << "\n";
	o << "Luong: " << nvhd.getLuongNV() << "\n";
	o << "Ngay Bat Dau: " << nvhd.getNgayBatDau() << "\n";
	o << "Luong Cong Nhat Theo Ngay: " << nvhd.luongCongNhatTheoNgay << "\n";

	return o;
	// TODO: insert return statement here
}
