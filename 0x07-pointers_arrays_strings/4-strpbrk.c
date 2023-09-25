#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string occurence
 * @accept: bytes in the string
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				return ((s + a));
			b++;
		}
		a++;
	}
	return (NULL);
}
