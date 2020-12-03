#pragma once
#include "Node.h"
#include "NVHD.h"
#include "NVBC.h"

template <class Type, class Type2>
class QLNV
{
private:
	Type* dsNV;					// tro den mang cac doi tuong nhan vien (su dung danh sach lien ket don de luu tru danh sach nhan vien)
	Type* tail;
	Type2 slNV;
public:
	void themNV();
	void xoaNV();
	void suaThongTinNV();
	void hienThiThongTinNV();
	void timKiemNV();
	void sapXepNV();
	void soLuongNhanVien();

	QLNV(Type ds, Type2 type);
	QLNV();
	~QLNV();
};

