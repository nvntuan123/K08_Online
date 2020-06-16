#include <iostream>
#include "CMyArray.h"

using namespace std;

int main()
{
	CMyArray ArrA1(5);
	//ArrA1.~CMyArray(); // Đã giải con trỏ _IArr.
	//ArrA1.GetLocation();

	CMyArray ArrA2(ArrA1);
	//ArrA1.~CMyArray();
	//ArrA2.GetLocation();

	ArrA2 = ArrA1;

	system("pause");
	return 0;
}
