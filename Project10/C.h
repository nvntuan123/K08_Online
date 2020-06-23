#pragma once
#include <iostream>
#include "A.h"

// Class C tượng trưng cho hình chữ nhật.
class C : public virtual A
{
public:
	double xC;
	//virtual void cal() = 0;

	// Overloading
	//void tinh();

	// Overloading => using
	//void process(double);
};

