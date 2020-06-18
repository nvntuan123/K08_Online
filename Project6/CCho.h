#pragma once
#include "CDongVat.h"

class CCho : protected CDongVat // Tầm vực mặc định là public.
{
private:
	/*
	1: Việt Nam.
	2: Mỹ.
	3: Đức.
	4: Pháp.
	5: Nhật Bản.
	*/
	int _INguonGoc;
public:
	void nhapThongTinCho();
};

