#include <iostream>
#include "CCho.h"
#include "CMeo.h"
#include "CGa.h"

using namespace std;

int main()
{
	CCho _ChoCon;
	cout << "-----------Nhap Thong Tin Cho-----------" << endl;
	_ChoCon.nhapThongTinCho();

	CMeo _MeoCon;
	cout << "-----------Nhap Thong Tin Meo-----------" << endl;
	_MeoCon.nhapThongTinMeo();

	CGa _GaTre;
	cout << "-----------Nhap Thong Tin Ga-----------" << endl;
	_GaTre.nhapThongTinGa();

	system("pause");
	return 0;
}
