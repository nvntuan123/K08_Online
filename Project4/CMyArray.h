#pragma once
#include <iostream>

class CMyArray
{
	/*instance*/
private:
	int _IN; // Số lượng phần tử.
	int* _IArr; // Mảng 1 chiều động.
public:
	CMyArray(int x); // Phương thức khởi tạo có 1 tham số, và nhận tham số đó làm số lượng phần tử cho mảng.
	CMyArray(CMyArray& x);
	~CMyArray();
	void GetLocation();
	/*instance*/
};

