#include "NhanVien.h"



NhanVien::NhanVien()
{
}


NhanVien::~NhanVien()
{
}

void NhanVien::setMaNV(string maNV)
{
	this->maNV = maNV;
}

string NhanVien::getMaNV()
{
	return this->maNV;
}

void NhanVien::setTenNV(string tenNV)
{
	this->tenNV = tenNV;
}

string NhanVien::getTenNV()
{
	return this->tenNV;
}

void NhanVien::setGoiTinhNV(bool gioiTinhNV)
{
	this->gioiTinh = gioiTinhNV;
}

bool NhanVien::getGioiTinhNV()
{
	return this->gioiTinh;
}

void NhanVien::setLuongNV(double luongNV)
{
	this->luong = luongNV;
}

double NhanVien::getLuongNV()
{
	return this->luong;
}

void NhanVien::setNgayBatDau(Date ngayBatDau)
{
	this->ngayBatDauLamViec = ngayBatDau;
}

Date NhanVien::getNgayBatDau()
{
	return this->ngayBatDauLamViec;
}

ostream & operator<<(ostream &o, NhanVien &nhanvien)
{
	o << "Ma so NV: " << nhanvien.maNV << "\n";
	o << "Ten NV: " << nhanvien.tenNV << "\n";
	o << "Gioi tinh: " << ((nhanvien.gioiTinh) ? "Nam" : "Nu") << "\n";
	o << "Luong: " << nhanvien.luong << "\n";
	o << "Ngay Bat Dau: " << nhanvien.ngayBatDauLamViec << "\n";

	return o;

	// TODO: insert return statement here
}
