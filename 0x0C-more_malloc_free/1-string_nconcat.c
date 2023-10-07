#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to first string.
 * @s2: pointer to 2nd string.
 * @n: Number of bytes from n2 to concatenate.
 *
 * Return:pointer to space in memory containing concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	int j;
	unsigned int mem_al;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	mem_al = strlen(s1) + n;
	ptr = malloc(mem_al + 1);
	if (ptr == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < mem_al; i++)
	{
		if (i < strlen(s1))
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[j];
			j++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
