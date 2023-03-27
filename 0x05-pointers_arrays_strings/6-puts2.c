#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: char to pointer
 *
 * Return: 0 is success
 */
void puts2(char *str)
{
	int chr;

	for (chr = 0; str[chr] != '\0'; chr++)
	if (chr % 2 == 0)
		_putchar(str[chr]);
	_putchar('\n');
}
