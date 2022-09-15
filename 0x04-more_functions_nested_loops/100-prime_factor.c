#include <stdio.h>
#include "main.h"

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)

{
long int var = 612852475143;
long int primeFact = 2;
while (var > 1)
{
if (var % primeFact == 0)
{
var /= primeFact;
}
else
{
primeFact++;
}
}
printf("%ld\n", primeFact);
return (0);
}
