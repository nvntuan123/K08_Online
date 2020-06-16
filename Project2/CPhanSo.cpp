#include "CPhanSo.h"

void CPhanSo::nhap()
{
	std::cout << "Nhap tu: ";
	std::cin >> this->_ITu;
	std::cout << "Nhap mau: ";
	std::cin >> _IMau;
}

void CPhanSo::xuat()
{
	std::cout << this->_ITu << " / " << this->_IMau << std::endl;
}

int CPhanSo::getTu()
{
	return this->_ITu;
}

int CPhanSo::getMau()
{
	return this->_IMau;
}

void CPhanSo::setTu(int x)
{
	this->_ITu = x;
}

void CPhanSo::setMau(int x)
{
	if (!x)
	{
		return;
	}
	this->_IMau = x;
}
