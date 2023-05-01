#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Description: main - Print whether a number is positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is %s\n", n, "is positive");
}
else if (n < 0)
{
printf("%d is %s\n", n, "is negative");
}
else
{
printf("%d is %s\n", n, "is zero");
}
return (0);
}
