#include "main.h"

/**
 * reset_to_98 -  swaps the values of two integers
 * @*a: pointer to the value a
 * @*b: pointer to the value b
 * 
 * Return: void
 */
void swap_int(int *a, int *b)

{
    int c;
	c = *a;
	*a = *b;
	*b = c;

}