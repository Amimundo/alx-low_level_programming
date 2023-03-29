#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @c:string uppercase
 * Return:string lowercase
 */
char *string_toupper(char *c)
{

	int i;

    i = 0;
    for (int i = 0; *(c + i); i++)
    {
        if (*(c + i) >= 'a' && *(c + i) <= 'z')
			*(c + i) -= 'a' - 'A';
    }
	return (i);
}
