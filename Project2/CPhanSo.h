#pragma once // Tránh đụng độ thư viện.
#include <iostream>

class CPhanSo
{
	// Thuộc tính: thông tin của phân số.
private:
	int _ITu;
	int _IMau;

	// Phương thức: là hành động của lớp đối tượng phân số.
public:
	void nhap();
	void xuat();
	int getTu();
	int getMau();
	void setTu(int x);
	void setMau(int x);
	CPhanSo cong(CPhanSo x);
	CPhanSo tru(CPhanSo x);
	CPhanSo nhan(CPhanSo x);
	CPhanSo chia(CPhanSo x);
};
