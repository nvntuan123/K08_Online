#include "CPhanSo.h"

CPhanSo::CPhanSo() // default construct
{
	this->_ITu = 0;
	this->_IMau = 1;
	//this->Ptr = new int;
}

// Tử = t, mẫu = 1.
CPhanSo::CPhanSo(int t)
{
	this->_ITu = t;
	this->_IMau = 1;
}

// Tử = t, mẫu = m.
CPhanSo::CPhanSo(int t, int m)
{
	this->_ITu = t;
	this->_IMau = m;
}

CPhanSo::~CPhanSo() // destructor.
{
	std::cout << "Ham huy da duoc goi o day nek." << std::endl;
	/*delete this->Ptr;
	this->Ptr = NULL;*/
}

void CPhanSo::outPut()
{
	std::cout << this->_ITu << "/" << this->_IMau << std::endl;
}

void CPhanSo::Allocte_Ptr()
{
	//this->Ptr = new int;
}

void CPhanSo::SetStatic(int x)
{
	_BienTinh = x;
}

int CPhanSo::GetStatic()
{
	return _BienTinh;
}

int CPhanSo::_BienTinh = 0;
