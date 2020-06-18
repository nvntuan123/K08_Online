#include "CLopCon.h"

CLopCon::CLopCon(int n) : CLopCha(0)
{
	std::cout << "Lop con: Ham dung 1 tham so." << std::endl;
	this->n = n;
	this->a = new int[this->n];
	for (size_t i = 0; i < this->n; i++)
	{
		this->a[i] = 7;
	}
}

CLopCon::~CLopCon() // Default Constructor
{
	delete[] this->a;
	this->a = nullptr;
	std::cout << "Lop con: Ham huy." << std::endl;
}

void CLopCon::func()
{
	std::cout << "Lop con: func()." << std::endl;
}

CLopCon& CLopCon::operator=(CLopCon& ccon)
{
	// TODO: insert return statement here
	if (this != &ccon)
	{
		CLopCha::operator=(ccon);

		this->n = ccon.n;
		delete[] this->a;
		this->a = nullptr;
		this->a = new int[this->n];
		for (size_t i = 0; i < this->n; i++)
		{
			a[i] = 7;
		}
	}
	return *this;
}

void CLopCon::xuatThongTin()
{
	if (this->a != nullptr)
	{
		std::cout << "n = " << this->n << std::endl;
		std::cout << "Mang a: " << std::endl;
		std::cout << "Dia chi that su cua a: " << &(this->a) << std::endl;
		std::cout << "Vung nho cua bien a: " << this->a << std::endl;
		for (size_t i = 0; i < this->n; i++)
		{
			std::cout << "a[" << i + 1 << "] = " << this->a[i] << std::endl;
		}
	}
}
