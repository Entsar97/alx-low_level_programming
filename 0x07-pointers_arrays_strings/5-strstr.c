#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: substring needle
 * @haystack: string haystack
 *
 * Return: pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int a, b, done;

	a = 0;
	b = 0;
	done = 0;

	while (haystack[a] != '\0')
	{
		if (needle[b] == haystack[a])
		{
			done = 1;
			b++;
		}
		else
		{
			done = 0;
			b = 0;
		}
		if (needle[b] == '\0' && done == 1)
			return ((haystack + a - b + 1));
		else if (needle[b] == '\0' && done == 0)
			return (haystack);
		a++;
	}
	return (NULL);
}
