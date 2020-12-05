#pragma once
#include "NhanVien.h"

using namespace std;
class NVBC :  public NhanVien
{
private:
	double heSoLuong;
	double thamNienLamViec;
public:
	void setHSL(double hsl);
	double getHSL();
	void setTNLV(double tnlv);
	double getTNLV();
	double getLuongNV();
	friend ostream& operator<<(ostream&, NVBC&);
	friend istream& operator >> (istream&, NVBC&);
	NVBC();
	~NVBC();
};

