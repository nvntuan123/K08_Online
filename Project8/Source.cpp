#include "CNhanVien.h"
#include "CNVSanXuat.h"

int main()
{
	CNVSanXuat* _PtrNV1 = new CNVSanXuat(); // Ok.
	CNhanVien* _PtrNV2 = new CNVSanXuat(); // Ok.
	//CNVSanXuat* _PtrNV3 = new CNhanVien(); // Error.

	_PtrNV2->_nhap();
	std::cout << std::endl;
	_PtrNV2->_xuat();

	std::cout << "Tinh luong: " << _PtrNV2->_tinhLuong() << std::endl;

	delete _PtrNV2;
	delete _PtrNV1;

	system("pause");
	return 0;
}
