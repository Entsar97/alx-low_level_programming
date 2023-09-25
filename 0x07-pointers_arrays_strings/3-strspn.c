#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to search
 * @accept: bytes in which to search for
 *
 * Return: n bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, count, checker;

	a = 0;
	b = 0;
	checker = 0;
	count = 0;
	while (s[a] != '\0')
	{
		b = 0;
		checker = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				count++;
				checker = 1;
				/* Break to early increase efficiency */
				break;
			}
			b++;
		}
		if (checker == 0)
			return (count);
		a++;
	}
	return (count);

}
