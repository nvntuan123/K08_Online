#pragma once
#include <iostream>

class CPhanSo
{
	/*instance members*/
private:
	int _ITu;
	int _IMau;
	//int* Ptr;
public:
	// Phương thức khởi tạo mặc định(default constructor).
	CPhanSo();

	// Những phương thức khởi tạo có tham số(parameter constructor).

	// t là tử số.
	CPhanSo(int t);
	// t là tử số, m là mẫu số.
	CPhanSo(int t, int m);

	// =========================================
	~CPhanSo(); // Phương thức hủy(destructor).
	void outPut();
	void Allocte_Ptr();
	/*instance members*/

	/*static members*/
private:
	static int _BienTinh;
public:
	static void SetStatic(int x);
	static int GetStatic();
	/*static members*/
};

//int CPhanSo::_ITu = 1; // instance
//int CPhanSo::_BienTinh = 0; // static.
