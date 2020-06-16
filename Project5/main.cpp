#include <iostream>
#include "CPhanSo.h"

using namespace std;

// <kiểu dữ liệu> <tên hàm>("Danh sách tham số").
// <kiểu dữ liệu>* <tên hàm>(""Danh sách tham số).
// <kiểu dữ liệu>& <tên hàm>("Danh sách tham số");

int* _returnAddress1(int IValue)
{
	return &IValue;
}

int& _returnAddress2(int IValue)
{
	return IValue;
}

int main()
{
	int p = 2;
	_returnAddress2(p);
	cout << p << endl;

	//CPhanSo a, b, c;
	//cout << "Nhap phan so a." << endl;
	////a.nhap();
	//cin >> a;
	//cout << "Nhap phan so b." << endl;
	//b.nhap();

	//c = a.cong(b);
	/*c = a + b;
	a.xuat();
	cout << " + ";
	b.xuat();
	cout << " = ";
	c.xuat();
	cout << endl;

	c = a - b;
	a.xuat();
	cout << " - ";
	b.xuat();
	cout << " = ";
	c.xuat();
	cout << endl;

	c = a * b;
	a.xuat();
	cout << " * ";
	b.xuat();
	cout << " = ";
	c.xuat();
	cout << endl;

	c = a / b;
	a.xuat();
	cout << " / ";
	b.xuat();
	cout << " = ";
	c.xuat();
	cout << endl;*/

	/*a += b;
	a.xuat();
	cout << " + ";
	b.xuat();
	cout << " = ";
	a.xuat();
	cout << endl;*/

	/*a -= b;
	cout << "a = ";
	a.xuat();
	cout << endl;*/

	/*a /= b;
	cout << "a = ";
	a.xuat();
	cout << endl;*/

	/*if (a <= b)
	{
		cout << "a <= b" << endl;
		cout << "Co hieu" << endl;
	}
	else
	{
		cout << "a > b" << endl;
	}*/

	//++a;
	//a++;
	//cout << a << endl; // <<(cout, a)

	system("pause");
	return 0;
}
