#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @s:string uppercase
 * Return:string lowercase
 */
char *string_toupper(char *s)
{

	int i;

    i = 0;
    for (int i = 0; *(s + i); i++)
    {
        if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
    }
	return (s);
}
