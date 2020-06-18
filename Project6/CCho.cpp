#include "CCho.h"

void CCho::nhapThongTinCho()
{
	this->_nhapThongTinDongVat();
	std::cout << "Nguon goc." << std::endl;
	std::cout << "1. Viet Nam." << std::endl;
	std::cout << "2. My." << std::endl;
	std::cout << "3. Duc." << std::endl;
	std::cout << "4. Phap." << std::endl;
	std::cout << "5. Nhat Ban." << std::endl;
	std::cout << "Chon nguon goc: ";
	std::cin >> this->_INguonGoc;
}
