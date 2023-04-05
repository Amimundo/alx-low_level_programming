#include "main.h"
/**
 * _sqrt - checks for the square root
 * @a:int
 * @b:int
 *
 * return: int value
 */
int _sqrt(int a, int b)
{
    if (a * a > b)
		return (-1);
	if (a * a == b)
		return (a);
	return (_sqrt(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));
}
