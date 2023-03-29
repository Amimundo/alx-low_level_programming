#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest:char destiny
 * @src:char source
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
	char *conct = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (conct);
}
