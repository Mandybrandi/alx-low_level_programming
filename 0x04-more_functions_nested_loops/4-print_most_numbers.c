#include "main.h"

/**
 * print_most_numbers - print the number from 0 to 9
 * except 2 and 4
 * Return: Nothing
 */

void print_most_numbers(void)

{
char num;

for (num = '0'; num <= '9'; num++)
{
if (num != '2' && num != '4')
{
_putchar(num);
}
}
_putchar('\n');
}