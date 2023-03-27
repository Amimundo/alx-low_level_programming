#include "main.h"

/**
 * _strlen -  function that returns the length of a string
 * @*s: pointer to the value string
 * 
 * Return: value
 */
int _strlen(char *s)

{
    int a = 0;
    
    for (; *s++;)
        a++;
    return(a);

}