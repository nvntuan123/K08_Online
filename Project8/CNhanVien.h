#pragma once
#include <iostream>
#include <string>

class CNhanVien // Interface
{
protected:
	std::string _StrHoTen;
	int _ITuoi;
public:
	//virtual CNhanVien(); // Default Constructor.
	//virtual CNhanVien(int x); // Parameter Constructor.
	virtual ~CNhanVien(); // Hàm hủy ảo(Virtual Destructor).
	virtual void _nhap();
	virtual void _xuat();
	//virtual double _tinhLuong(); // Hàm ảo.
	virtual double _tinhLuong() = 0; // Hàm thuần ảo.
};

