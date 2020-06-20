#pragma once
#include "CNhanVien.h"
class CNVSanXuat : public CNhanVien // CNhanVien(Interface nhan vien, INhanVien)
{
private:
	double _DDonGia;
	int _ISoLuong;
public:
	~CNVSanXuat();
	void _nhap();
	void _xuat();
	double _tinhLuong();
};

