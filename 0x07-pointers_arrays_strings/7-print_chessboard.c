#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
int x;
int b;

for (x = 0; x < 8; x++)
{
for (b = 0; b < 8; b++)
_putchar(a[x][b]);
_putchar('\n');
}
}
