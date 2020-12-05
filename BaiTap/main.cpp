#include "QLNV.h"
#include "QLNV.cpp"				// need
#include "NhanVien.h"
#include "Node.h"

void showMenu();

int main()
{
	QLNV<Node, int> qlnv;

	int choose;
	
	showMenu();

	while (true) {
		cout << "\nNhap Lua Chon: ";
		cin >> choose;
		if (choose == 1) {
			qlnv.themNV();
		}
		else if (choose == 2) {
			qlnv.hienThiThongTinNV();
		}
		else if (choose == 3) {
			qlnv.xoaNV();
		}
		else if (choose == 4) {
			qlnv.sapXepNV();
		}
		else if (choose == 5) {
			qlnv.soLuongNhanVien();
		}
		else if (choose == 6) {
			qlnv.timKiemNV();
		}
		else if (choose == 7) {
			qlnv.suaThongTinNV();
		}
		else if (choose == 8) {
			break;
		}

		showMenu();
	}

	return 0;
}

void showMenu() {
	cout << "_________________MENU____________________\n";
	cout << "1. Them Nhan Vien\n";
	cout << "2. Hien Thi Danh Sach\n";
	cout << "3. Xoa Nhan Vien\n";
	cout << "4. Sap Xep Nhan Vien\n";	// error
	cout << "5. So Luong Nhan Vien Hien Tai\n";
	cout << "6. Tim Kiem Nhan Vien\n";
	cout << "7. Sua Thong Tin Nhan Vien\n";
	cout << "8. EXIT\n";
}