#pragma once
#include <iostream>

class CCrush
{
private:
	std::string _STRTen;
	int _ITuoi;
	std::string _STRDiaChi;
	bool Status; // Trạng thái đã có gấu rồi hay chưa.
public:
	void camSung(int x); // x là số lượng người đã từng bị crush cắm sừng.
};

