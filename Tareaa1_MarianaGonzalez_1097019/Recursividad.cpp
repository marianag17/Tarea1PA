#include "Recursividad.h"



Recursividad::Recursividad()
{

}
int Recursividad::MultiSuma(int num1, int num2)
{
	if (num1 == 0 || num2 == 0)
		return 0;
	else
	{
		return num1 + MultiSuma(num1, num2 - 1);
	}
}

