#include "main.h"

/**
 * puts2 -   prints every other character of a string, starting with the first character, followed by a new line.(I think you mean even)
 * @*str: pointer to the value string
 * 
 * Return: void
 */
void puts_half(char *str)

{
    int a = 0,i;
    
    for (; *str++;)
        a++;

	if (a + 1 % 2 != '0')
		i = (a - 1) / 2;
	else
		i = (a / 2);
    
    for (; str[i] != '\0'; i++)
	_putchar(str[i]);
	_putchar('\n');

}