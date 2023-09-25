#include "main.h"

/**
 * _memset - fills s with constant b value n times
 * @s: pointer
 * @b: constant value
 * @n: maximum number of filling
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int e = 0;

	for (; n > 0; e++)
	{
		s[e] = b;
		n--;
	}
	return (s);
}
