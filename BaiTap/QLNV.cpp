#include "QLNV.h"


template <class Type, class Type2>
void QLNV<Type, Type2>::themNV()
{
	int type;
	cout << "nhan vien hop dong(1) hay nhan vien bien che(0): ";
	cin >> type;

	
	if (type == 1) {
		NVHD data;
		string maNV;
		string tenNV;
		Date ngayBatDau;
		bool gioiTinh;
		double luongTheoNgay;

		cout << "Nhap ma NV: ";
		cin >> maNV;
		cout << "Nhap ten NV: ";
		cin >> tenNV;
		cout << "Nhap ngay bat dau: ";
		cin >> ngayBatDau;
		cout << "Nhap gioi tinh: ";
		cin >> gioiTinh;
		cout << "Nhap luong theo ngay: ";
		cin >> luongTheoNgay;

		data.setMaNV(maNV);
		data.setTenNV(tenNV);
		data.setNgayBatDau(ngayBatDau);
		data.setGoiTinhNV(gioiTinh);
		data.setLuongTheoNgay(luongTheoNgay);

		Node* temp;
		temp = new Node(data, NULL, NULL);
		this->slNV++;

		if (this->dsNV == NULL) {
			dsNV = tail = temp;
		}
		else {
			temp->next = this->dsNV;
			this->dsNV->pre = temp;
			this->dsNV = temp;
		}
	}
	else {
		NVBC data;
		string maNV;
		string tenNV;
		Date ngayBatDau;
		bool gioiTinh;
		double heSoLuong;
		double thamNienLamViec;

		cout << "Nhap ma NV: ";
		cin >> maNV;
		cout << "Nhap ten NV: ";
		cin >> tenNV;
		cout << "Nhap ngay bat dau: ";
		cin >> ngayBatDau;
		cout << "Nhap gioi tinh: ";
		cin >> gioiTinh;
		cout << "Nhap he so luong: ";
		cin >> heSoLuong;
		cout << "Nhap tham niem lam viec: ";
		cin >> thamNienLamViec;

		data.setMaNV(maNV);
		data.setTenNV(tenNV);
		data.setNgayBatDau(ngayBatDau);
		data.setGoiTinhNV(gioiTinh);
		data.setHSL(heSoLuong);
		data.setTNLV(thamNienLamViec);

		Node* temp;
		temp = new Node(data, NULL, NULL);
		this->slNV++;

		if (this->dsNV == NULL) {
			dsNV = tail = temp;
		}
		else {
			temp->next = this->dsNV;
			this->dsNV->pre = temp;
			this->dsNV = temp;
		}
	}
}

template <class Type, class Type2>
void QLNV<Type, Type2>::xoaNV()
{
	string maNV;
	cout << "Nhap ma nhan vien can xoa: ";
	cin >> maNV;

	Node* node = this->dsNV;
	//while (node != this->tail->next) {
	//	//if(node->data.)
	//}
}

template <class Type, class Type2>
void QLNV<Type, Type2>::suaThongTinNV()
{
}

template <class Type, class Type2>
void QLNV<Type, Type2>::hienThiThongTinNV()
{
	cout << "Thong Tin Cua Tat Ca Nhan Vien\n";

	Node *node = this->dsNV;
	while (node != this->tail->next) {
		cout << node->data;
		node = node->next;
		cout << "------------------------";
	}
}

template <class Type, class Type2>
void QLNV<Type, Type2>::timKiemNV()
{
}

template <class Type, class Type2>
void QLNV<Type, Type2>::sapXepNV()
{
}

template <class Type, class Type2>
QLNV<Type, Type2>::QLNV(Type ds, Type2 type)
{
	this->dsNV = ds;
	this->tail = ds;
	this->slNV = type;
}

template<class Type, class Type2>
QLNV<Type, Type2>::QLNV()
{
}


template <class Type, class Type2>
QLNV<Type, Type2>::~QLNV()
{
}
