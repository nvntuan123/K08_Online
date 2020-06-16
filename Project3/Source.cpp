#include <iostream>

#include "CPhanSo.h"

using namespace std;

//struct ThungMi
//{
//	int GoiMi1;
//	int GoiMi2;
//	// ...
//	int GoiMi24;
//};
//
//struct ThungBia
//{
//	long LonBia1;
//	long LonBia2;
//	//...
//	long LonBia36;
//};
//
//struct GioXeDungDo
//{
//	int LocSuaChua;
//	long BanhBongLan;
//	string CaHop;
//	double LonCoCaCola;
//	float LocSoCoLa;
//};
//
//struct NhanVien
//{
//public:
//	NhanVien(); // Default Constructor(Hàm khởi tạo mặc định).
//	~NhanVien(); // Destructor(Hàm hủy).
//};
//
//class SinhVien
//{
//public:
//	SinhVien(); // Default Constructor(Hàm khởi tạo mặc định).
//	~SinhVien(); // Destructor(Hàm hủy).
//
//private:
//
//};
//
//SinhVien::SinhVien()
//{
//}
//
//SinhVien::~SinhVien()
//{
//}

void HoanVi(int& a, int b)
{

}

int main()
{
	int c = 1, d = 2;
	HoanVi(c, d);

	//CPhanSo* a = new CPhanSo();
	//{
	//	cout << "Bien thuong." << endl;
	//	CPhanSo a(4);
	//	cout << "Phan so a la: ";
	//	a.outPut();

	//	CPhanSo b(1, 2); // Tu = 1, mau = 2.
	//	cout << "Phan so b la: ";
	//	b.outPut();
	//}

	//cout << "Bien thuong." << endl;
	//CPhanSo a(4);
	//cout << "Phan so a la: ";
	//a.outPut();
	//a.~CPhanSo(); // Ham huy cua bien a o day nek.

	//CPhanSo b(1, 2); // Tu = 1, mau = 2.
	//cout << "Phan so b la: ";
	//b.outPut();
	//b.~CPhanSo(); // Ham huy cua bien b o day nek.
	//
	//cout << endl << "Bien con tro." << endl;
	//CPhanSo* c = new CPhanSo(1);
	//cout << "Phan so c la: ";
	//c->outPut();
	//delete c;

	//CPhanSo* d = new CPhanSo(-5, 6);
	//cout << "Phan so d la: ";
	//d->outPut();
	//delete d;

	//CPhanSo a; // Mặc định default constructor được gọi ra khi khai báo biến như thế này.
	//a.~CPhanSo();
	//CPhanSo p1;
	//p1.outPut(); // 0/1

	//CPhanSo p2(1, 2);
	//p2.outPut(); // 1/2

	cout << CPhanSo::GetStatic() << endl; // 0
	//cout << CPhanSo::outPut() << endl; // instance => error.
	CPhanSo::SetStatic(5);
	cout << CPhanSo::GetStatic() << endl;

	CPhanSo a(1, 2);
	a.SetStatic(15); // _BienTinh = 15.
	cout << CPhanSo::GetStatic() << endl;

	system("pause");
	return 0;
}