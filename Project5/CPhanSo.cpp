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
	std::cout << this->_ITu << " / " << this->_IMau;
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

//CPhanSo CPhanSo::cong(CPhanSo x)
//{
//	CPhanSo _Sum;
//	_Sum._ITu = this->_ITu * x._IMau + this->_IMau * x._ITu;
//	_Sum._IMau = this->_IMau * x._IMau;
//	return _Sum;
//}

CPhanSo CPhanSo::operator+(CPhanSo x)
{
	CPhanSo _Sum;
	_Sum._ITu = this->_ITu * x._IMau + this->_IMau * x._ITu;
	_Sum._IMau = this->_IMau * x._IMau;
	return _Sum;
}

CPhanSo CPhanSo::operator-(CPhanSo x)
{
	CPhanSo _IKetQua;
	_IKetQua._ITu = this->_ITu * x._IMau - this->_IMau * x._ITu;
	_IKetQua._IMau = this->_IMau * x._IMau;
	return _IKetQua;
}

CPhanSo CPhanSo::operator*(CPhanSo x)
{
	CPhanSo _IKetQua;
	_IKetQua._ITu = x._ITu * this->_ITu;
	_IKetQua._IMau = x._IMau * this->_IMau;

	return _IKetQua;
}

CPhanSo CPhanSo::operator/(CPhanSo x)
{
	/*CPhanSo _IKetQua;
	_IKetQua._ITu = this->_ITu * x._IMau;
	_IKetQua._IMau = x._ITu * this->_IMau;
	return _IKetQua;*/

	CPhanSo Temp;
	Temp._ITu = x._IMau;
	Temp._IMau = x._ITu;

	return (*(this) * Temp);
}

CPhanSo CPhanSo::operator+=(CPhanSo x)
{
	this->_ITu = this->_ITu * x._IMau + this->_IMau * x._ITu;
	this->_IMau = this->_IMau * x._IMau;
	return *(this);
}

CPhanSo CPhanSo::operator-=(CPhanSo x)
{
	this->_ITu = this->_ITu * x._IMau - this->_IMau * x._ITu;
	this->_IMau = this->_IMau * x._IMau;
	return *(this);
}

CPhanSo CPhanSo::operator*=(CPhanSo x)
{
	this->_ITu = x._ITu * this->_ITu;
	this->_IMau = x._IMau * this->_IMau;
	return *(this);
}

CPhanSo CPhanSo::operator/=(CPhanSo x)
{
	this->_ITu = this->_ITu * x._IMau;
	this->_IMau = x._ITu * this->_IMau;
	return *(this);
}

bool CPhanSo::operator>(CPhanSo x)
{
	/*if ((this->_ITu * x._IMau) - (this->_IMau * x._ITu) > 0)
	{
		return true;
	}*/
	/*if ((this->_ITu / this->_IMau) > (x._ITu / x._IMau))
	{
		return true;
	}
	return false;*/
	return ((this->_ITu / this->_IMau) > (x._ITu / x._IMau));
}

bool CPhanSo::operator>=(CPhanSo x)
{
	/*if ((this->_ITu / this->_IMau) > (x._ITu / x._IMau))
	{
		return false;
	}
	return true;*/
	return ((this->_ITu / this->_IMau) >= (x._ITu / x._IMau));
}

bool CPhanSo::operator<(CPhanSo x)
{
	return !((this->_ITu / this->_IMau) >= (x._ITu / x._IMau));
}

bool CPhanSo::operator<=(CPhanSo x)
{
	return !((this->_ITu / this->_IMau) > (x._ITu / x._IMau));
}

CPhanSo CPhanSo::operator++()
{
	this->_ITu = this->_ITu + this->_IMau;
	return *(this);
}

CPhanSo CPhanSo::operator++(int)
{
	CPhanSo Temp(*this);
	this->_ITu = this->_ITu + this->_IMau;
	return Temp;
}


std::istream& operator>>(std::istream& Input, CPhanSo& x)
{
	// TODO: insert return statement here
	std::cout << "Nhap tu: ";
	Input >> x._ITu;
	std::cout << "Nhap mau: ";
	Input >> x._IMau;
	return Input;
}

std::ostream& operator<<(std::ostream& Output, CPhanSo& x)
{
	// TODO: insert return statement here
	Output << x._ITu << "/" << x._IMau;
	return Output;
}
