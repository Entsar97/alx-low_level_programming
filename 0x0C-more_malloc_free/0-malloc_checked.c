#include "main.h"

/**
 * malloc_checked - allocates memory using malloc and exit if failed
 * @b: int
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	void *e;

	e = malloc(b);

	if (e == 0)
		exit(98);

	return (e);
}
