#include "NVHD.h"



void NVHD::setLuongTheoNgay(double luongTheoNgay)
{
	this->luongCongNhatTheoNgay = luongTheoNgay;
}

double NVHD::getLuongTheoNgay()
{
	return this->luongCongNhatTheoNgay;
}

double NVHD::getLuongNV()
{
	//time_t now = time(0);				// return day and time now
	//tm* ltm = localtime(&now);

	//int year = 1900 + ltm->tm_year;
	//int month = 1 + ltm->tm_mon;
	//int day = ltm->tm_mday;

	//int soNgayDiLam=9;
	////if(month == 1)
	//double luongNVHD = this->luongCongNhatTheoNgay * soNgayDiLam;

	int tong = TongSoNgayTinhDenHienTai(1, 6, 1998);
	if (tong % 7 == 1) {
		cout << "THU 2\n";
	}
	else if (tong % 7 == 2) {
		cout << "THU 3\n";
	}
	else if (tong % 7 == 3) {
		cout << "THU 4\n";
	}
	else if (tong % 7 == 4) {
		cout << "THU 5\n";
	}
	else if (tong % 7 == 5) {
		cout << "THU 6\n";
	}
	else if (tong % 7 == 6) {
		cout << "THU 7\n";
	}
	else if (tong % 7 == 0) {
		cout << "CHU NHAT\n";
	}
	return 0.0;
}

bool NVHD::kiemTraNamNhuan(int year)
{
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) return true;
	return false;
}

int NVHD::getNumberDayInYear(int year)
{
	if (kiemTraNamNhuan(year)) return 366;
	return 365;
}

int NVHD::TongSoNgay(int year)
{
	int tongSoNgay = 0;					// tong so ngay tu 1/1/0001 den nam hien tai
	for (int i = 1; i < year; i++) {
		tongSoNgay += getNumberDayInYear(i);
	}
	return tongSoNgay;
}

int NVHD::TongSoNgayTinhTuDauNam(int year, int month)			// so ngay tu dau nam nay den thang hien tai
{
	int soNgay = 0;
	for (int i = 1; i < month; i++) {
		soNgay += SoNgayTrongThang(i, year);
	}
	return soNgay;
}

int NVHD::SoNgayTrongThang(int thang, int nam)
{
	switch (thang)
	{
	case 4: case 6: case 9: case 11: {
		return 30;
		break;
	}
	case 2: {
		if (kiemTraNamNhuan(nam)) {
			return 29;
		}
		else {
			return 28;
		}
	}
	default:
		return 31;
		break;
	}
}

int NVHD::TongSoNgayTinhDenHienTai(int day, int month, int year)
{
	return TongSoNgay(year) + TongSoNgayTinhTuDauNam(year, month) + day;
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
