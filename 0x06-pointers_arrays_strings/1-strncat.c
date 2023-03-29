#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest:char destination 
 * @src:char source
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    char *conct = dest;
	int i = 0;

    while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && i > n)
	{
		*dest = *src;
		dest++;
		src++;
        i++;
	}
	*dest = '\0';
	return (dest);
}
