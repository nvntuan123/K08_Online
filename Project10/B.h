#pragma once
#include <iostream>
#include "A.h"

// Class B tượng trưng cho hình thoi.
class B : public virtual A
{
public:
	float xB;
	//virtual void draw() = 0;

	// Overloading
	//void tinh();

	// Overloading => using
	//void process(int);
};

