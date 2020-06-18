#pragma once
#include "CLopCha.h"

class CLopCon : public CLopCha
{
private:
	int* a;
	int n;
public:
	CLopCon(int n);
	~CLopCon();
	void func() override;
	CLopCon& operator=(CLopCon& ccon);
	void xuatThongTin();
};

