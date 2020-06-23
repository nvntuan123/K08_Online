#include <iostream>
#include "A.h"
#include "D.h"

using namespace std;

//void doSth();

int main()
{
	//A a;
	//a.tinh(); // Error.
	//a.B::tinh(); // Ok.
	//a.C::tinh(); // Ok.

	//doSth();

	D d;
	d.xA = 5; // virtual base class.
	d.xB = 5.5;
	d.xC = 5.75;
	d.xD = 'A';

	cout << "A.xA = " << d.xA << endl;
	cout << "B.xB = " << d.xB << endl;
	cout << "C.xC = " << d.xC << endl;
	cout << "D.xD = " << d.xD << endl;

	system("pause");
	return 0;
}

//void doSth()
//{
//	A a;
//	a.process(10); // B.process(int).
//	a.process(7.8); // C.process(double).
//	char _IValueChar = 97;
//	a.process(_IValueChar);
//}
