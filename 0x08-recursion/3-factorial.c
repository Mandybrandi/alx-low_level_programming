#include "main.h"

/**
 * function - that returns the factorial of a given number
 * returns 0 success
 * @n: An integer variable
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
