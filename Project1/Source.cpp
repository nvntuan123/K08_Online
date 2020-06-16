//#include <iostream>
#include <stdio.h> // Thư viện hỗ trợ nhập/xuất trong C.
#include <conio.h> // _getch();

using namespace std;

void _swap(int* _IA, int* _IB);
int _ss(int _IA, int _IB);

int main()
{
	//int* _Ptr1;

	//cout << *_Ptr1; // 1. Giá trị
	//cout << &_Ptr1; // 2. Địa chỉ thật sự của con trỏ.
	//cout << _Ptr1; // 3. Vùng nhớ của con trỏ.

	/*printf_s("Gia tri: %d\n", (*_Ptr1));
	printf_s("Dia chi that su: %d\n", (&_Ptr1));
	printf_s("Vung nho: %d", _Ptr1);*/

	int _IValue1, _IValue2;
	_IValue1 = 2;
	_IValue2 = 3;

	_swap(&_IValue1, &_IValue2);

	if (_ss(_IValue1 + _IValue2, _IValue2))
	{
		printf_s("So %d lon hon %d.\n", _IValue1, _IValue2);
	}

	//system("pause");
	_getch();
	return 0;
}

void _swap(int* _IA, int* _IB)
{
	int _ITemp = *_IA;
	*_IA = *_IB;
	*_IB = _ITemp;
}

int _ss(int _IA, int _IB)
{
	return ((_IA) > (_IB) ? (_IA) : (_IB));
}
