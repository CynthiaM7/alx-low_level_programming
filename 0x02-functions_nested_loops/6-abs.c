#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: parameter
 * _abs - This function returns the absolute value of an integer argument n
 *
 * Return: absolute value of a number n
 */

int _abs(int n)
{
	if (n > 0)
		n = -n;
	return (n);
}
