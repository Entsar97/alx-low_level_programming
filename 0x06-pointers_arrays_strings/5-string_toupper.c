#include "main.h"

/**
 * string_toupper - that changes
 * all lowercase letters of a string to uppercase
 * @s: String to be capitalized
 * Return: Capitalized string
 */

char *string_toupper(char *s)
{

	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}
