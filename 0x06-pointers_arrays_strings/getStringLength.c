#include "main.h"

/**
 * getStringLength - obtains the length of input string
 * @str: String input
 *
 * Return: length of @str
 */

int getStringLength(char *str)
{
    int len = 0;

    while (*str != 0)
    {
	++len;
	++str;
    }

    return (len)
