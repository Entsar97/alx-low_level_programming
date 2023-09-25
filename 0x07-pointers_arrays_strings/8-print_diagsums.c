#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: a
 * @size: size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int b;
	int sum0 = 0;
	int sum1 = 0;

	for (b = 0; b < (size * size); b++)
	{
		if (b % (size + 1) == 0)
			sum0 += *(a + b);
		if (b % (size - 1) == 0 && b != 0 && b < size * size - 1)
			sum1 += *(a + b);
	}
	printf("%d, %d\n", sum0, sum1);
}
