#include "main.h"

/**
 * _memcpy - fuction that copies n bytes from memory area
 * @dest: destionation to copy the bytes to
 * @n: number of bytes to copy
 * @src: source of the bytes to copy
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
