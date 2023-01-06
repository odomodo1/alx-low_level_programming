#include "main.h"

/**
 * _abs - prints the absolute value of
 * an int
 * @v: the integer to be checked
 * Return: absolute value of an integer
 */

int _abs(int v)
{
	if (v >= 0)
	{
		return (v);
	}
	else
	{
		return (-(v));
	}
}
