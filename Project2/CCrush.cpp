#include "CCrush.h"

void CCrush::camSung(int x) // x là số lượng người đã từng bị crush cắm sừng.
{
	if (x < 0)
	{
		return;
	}

	if (x > 0)
	{
		std::cout << "Da cam sung " << x << " nguoi. Ahihi" << std::endl;
	}
	else
	{
		std::cout << "Chua co cam sung ai het nha!" << std::endl;
	}
}
