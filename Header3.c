#include "Header1.h"

Div IntDiv(int num1, int num2)
{
	Div dval;

	dval.quoti = num1 / num2;
	dval.remain = num1 % num2;

	return dval;
}