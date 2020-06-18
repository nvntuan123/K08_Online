#include "CLopCha.h"

CLopCha::CLopCha()
{
	std::cout << "Lop cha: Ham dung mac dinh." << std::endl;
	this->x = 0;
}

CLopCha::CLopCha(int m)
{
	std::cout << "Lop cha: Ham dung 1 tham so." << std::endl;
	this->x = m;
}

void CLopCha::func()
{
	std::cout << "Lop cha: func()." << std::endl;
}

CLopCha::~CLopCha()
{
	std::cout << "Lop cha: Ham huy." << std::endl;
}

CLopCha& CLopCha::operator=(CLopCha& ccha)
{
	// TODO: insert return statement here
	if (this != &ccha)
	{
		this->x = ccha.x;
	}
	return *this;
}
