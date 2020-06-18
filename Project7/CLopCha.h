#pragma once
#include <iostream>

class CLopCha
{
protected:
	int x;
public:
	CLopCha();
	CLopCha(int m);
	virtual void func();
	~CLopCha();
	CLopCha& operator=(CLopCha& ccha);
};

