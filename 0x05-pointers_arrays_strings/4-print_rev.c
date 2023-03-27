#include "main.h"

/**
 * print_rev -   function that prints a string, in reverse, followed by a new line
 * @*s: pointer to the value string
 * 
 * Return: value
 */
void print_rev(char *s)

{
    int a = 0;
    int i;
    
    for (; *s++;)
        a++;

    for (i = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
    _putchar('\n');

}