#include <iostream>
#include "CPhanSo.h"
#include "CCrush.h"

using namespace std;

int main()
{
	CPhanSo _PSA;
	_PSA.nhap();
	cout << "Phan so a vua nhap vao la: ";
	_PSA.xuat();

	cout << "Truoc khi thay doi." << endl;
	cout << "Tu cua phan so a la: " << _PSA.getTu() << endl;
	cout << "Mau cua phan so a la: " << _PSA.getMau() << endl;

	cout << endl << "Sau khi thay doi." << endl;
	_PSA.setTu(3);
	_PSA.setMau(5);
	cout << "Tu: " << _PSA.getTu() << endl;
	cout << "Mau: " << _PSA.getMau() << endl;
	cout << "Phan so a vua thay doi la: ";
	_PSA.xuat();

	/*CPhanSo _PSB;
	_PSB.nhap();
	cout << "Phan so vua nhap vao la: ";
	_PSB.xuat();*/

	/*CCrush _CrCuaHung;
	_CrCuaHung.camSung(5);
	cout << "Qua da" << endl;*/

	system("pause");
	return 0;
}
