#include "main.h"

/**
 * more_numbers - prints 10times the number from 0 - 14
 * followed by a new line
 * Return: Nothing
 */

void more_numbers(void)

{
int i, x;

for (i = 0; i < 10; i++)
{
for (x = 0; x <= 14; x++)
{
if (x > 9)
{
_putchar(x / 10 + '0');
}
_putchar(x % 10 + '0');
}
_putchar('\n');
}
}
