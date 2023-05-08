#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: input
 * @size: input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
int sumc, sumb, d;

sumc = 0;
sumb = 0;

for (d = 0; d < size; d++)
{
sumc = sumc + a[d * size + d];
}

for (d = size - 1; d >= 0; d--)
{
sumb += a[d * size + (size - d - 1)];
}

printf("%d, %d\n", sumc, sumb);
}
