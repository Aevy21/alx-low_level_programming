#include "main.h"

/**
* _pow_recursion - Calculate the value of x raised to the power of y.
* @x: The base number.
* @y: The exponent.
* Return: x^y if y is non-negative, -1 if y is lower than 0.
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
return (+0);
}
