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
	/*CPhanSo cong(CPhanSo x);
	CPhanSo tru(CPhanSo x);
	CPhanSo nhan(CPhanSo x);
	CPhanSo chia(CPhanSo x);*/

	// Toán tử toán học.
	CPhanSo operator+(CPhanSo x); // operator+ <=> cong
	CPhanSo operator-(CPhanSo x); // operator- <=> tru
	CPhanSo operator*(CPhanSo x); // operator* <=> nhan
	CPhanSo operator/(CPhanSo x); // operator/ <=> chia

	// Toán tử phức hợp.
	CPhanSo operator+=(CPhanSo x);
	CPhanSo operator-=(CPhanSo x);
	CPhanSo operator*=(CPhanSo x);
	CPhanSo operator/=(CPhanSo x);

	// Toán tử so sánh.
	bool operator>(CPhanSo x);
	bool operator>=(CPhanSo x);
	bool operator<(CPhanSo x);
	bool operator<=(CPhanSo x);

	// Toán tử ++, --, tiền tố, hậu tố.
	CPhanSo operator++(); // Tiền tố. ++a
	CPhanSo operator++(int); // Hậu tố. a++

	// Toán tử >>, <<, nhập/xuất.
	friend std::istream& operator>>(std::istream& Input, CPhanSo& x); // cin >> x; <=> >>(cin, x)
	friend std::ostream& operator<<(std::ostream& Output, CPhanSo& x); // cout << x; <=> <<(cout, x);
};

