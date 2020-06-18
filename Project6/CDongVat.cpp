#include "CDongVat.h"

void CDongVat::_nhapThongTinDongVat()
{
	std::cout << "Nhap tuoi: ";
	std::cin >> this->_ITuoi;
	std::cout << "Chon gioi tinh(0. Giong Cai, 1. Giong Duc): ";
	std::cin >> this->_BGioiTinh;
}
