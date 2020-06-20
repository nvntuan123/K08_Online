#include "CNhanVien.h"

CNhanVien::~CNhanVien()
{
	std::cout << "Ham huy ao o day nek, Ahihi." << std::endl;
}

void CNhanVien::_nhap()
{
	std::cout << "Nhap ho ten: ";
	getline(std::cin, this->_StrHoTen);
	std::cout << "Nhap tuoi: ";
	std::cin >> this->_ITuoi;
}

void CNhanVien::_xuat()
{
	std::cout << "Ho ten: " << this->_StrHoTen << std::endl;
	std::cout << "Tuoi: " << this->_ITuoi << std::endl;
}


