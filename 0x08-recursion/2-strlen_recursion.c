#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s:string data
 * return:int
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);

	}
	return (a);
}
