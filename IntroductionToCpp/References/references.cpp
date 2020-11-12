#include <cstdlib>
#include <iostream>
#include "referencesh.h"

void mult(float a, float b, float& result)
{
	result = a * b;

}

void swap(float& a, float& b)
{
	float at = a;
	a = b;
	b = at;
}

