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
char Recursividad::Conversion(int ori, int dest, int num);
{
	if (ori == 2 || dest ==10)
	{

	}
	if (ori == 2 || dest == 8)
	{

	}
	if (ori == 2 || dest == 16)
	{

	}
	if (ori == 10 || dest == 2)
	{

	}
	if (ori == 10 || dest == 8)
	{

	}
	if (ori == 10 || dest == 16)
	{

	}
	if (ori == 8 || dest == 2)
	{

	}
	if (ori == 8 || dest == 10)
	{

	}
	if (ori == 8 || dest == 16)
	{

	}
	if (ori == 16 || dest == 8)
	{

	}
	if (ori == 16 || dest == 2)
	{

	}
	if (ori == 16 || dest == 10)
	{

	}

}
