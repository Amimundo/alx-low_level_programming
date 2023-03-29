#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of encoded string
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (letters[j] == s[i])
				s[i] = numbers[j];
		}
	}
	return (s);
}
