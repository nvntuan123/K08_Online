#include "CNVSanXuat.h"

CNVSanXuat::~CNVSanXuat()
{
	std::cout << "Ham huy nv san xuat." << std::endl;
}

void CNVSanXuat::_nhap()
{
	CNhanVien::_nhap();
	std::cout << "Nhap so luong: ";
	std::cin >> this->_ISoLuong;
	this->_DDonGia = 2;
}

void CNVSanXuat::_xuat()
{
	CNhanVien::_xuat();
	std::cout << "So luong: " << this->_ISoLuong << std::endl;
	std::cout << "Don gia: " << this->_DDonGia << std::endl;
}

double CNVSanXuat::_tinhLuong()
{
	return (this->_DDonGia * this->_ISoLuong);
}
