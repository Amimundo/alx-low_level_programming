#include "main.h"

/**
 * rev_string -  function that reverses a string.
 * @*s: pointer to the value string
 * 
 * Return: void
 */
void rev_string(char *s)

{
    int a = 0,b,c;
    char rev;
    
    for (; *s++;)
        a++;

    for (b = 0; c >= 0 && b < c; c--, b++)
	{
		rev = s[b];
		s[b] = s[c];
		s[c] = rev;
	}

}