#include "CMeo.h"

void CMeo::nhapThongTinMeo()
{
	this->_nhapThongTinDongVat();
	std::cout << "Mau Long." << std::endl;
	std::cout << "1. Den." << std::endl;
	std::cout << "2. Trang." << std::endl;
	std::cout << "3. Xam." << std::endl;
	std::cout << "Chon mau long: ";
	std::cin >> this->_IMauLong;
}
