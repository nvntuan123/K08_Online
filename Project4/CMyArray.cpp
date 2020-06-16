#include "CMyArray.h"

CMyArray::CMyArray(int x)
{
	this->_IN = x;
	this->_IArr = new int[this->_IN];
	std::cout << "Vung nho cua con tro trong constructor(int x): " << this->_IArr << std::endl;
}

CMyArray::CMyArray(CMyArray& x)
{
	this->_IN = x._IN; // this = ArrA2, x = ArrA1
	delete[] this->_IArr;
	this->_IArr = nullptr;
	this->_IArr = new int[this->_IN];
	for (size_t i = 0; i < this->_IN; i++)
	{
		this->_IArr[i] = x._IArr[i];
	}
}

CMyArray::~CMyArray()
{
	delete[] this->_IArr;
	this->_IArr = nullptr;
}

void CMyArray::GetLocation()
{
	std::cout << "Vung nho cua con tro: " << this->_IArr << std::endl;
}
