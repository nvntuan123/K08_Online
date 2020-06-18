#include "CGa.h"

void CGa::nhapThongTinGa()
{
	this->_nhapThongTinDongVat();
	std::cout << "Nhap can nang: ";
	std::cin >> this->_ICanNang;
}
