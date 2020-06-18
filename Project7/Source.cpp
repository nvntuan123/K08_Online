#include <iostream>
#include "CLopCon.h"

using namespace std;

int main()
{
	CLopCon _CClass(5);
	_CClass.func();
	//_CClass.~CLopCon();
	CLopCon _CClass1(7);
	_CClass1.xuatThongTin(); // 7 so 7
	_CClass1 = _CClass;
	_CClass1.xuatThongTin();
	cout << "Ahihi" << endl;
	
	_CClass1.~CLopCon();
	_CClass.~CLopCon();

	system("pause");
	return 0;
}
