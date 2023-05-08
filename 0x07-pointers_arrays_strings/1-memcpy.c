#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int y = 0;
int x = n;

for (; y < x; y++)
{
dest[y] = src[y];
n--;
}
return (dest);
}
