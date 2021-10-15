#include <stdio.h>

/**
 *  power - function the gets the power of an int
 *  @base: base number
 *  @exponent: number
 *  Return: power of two integers
 * */
int power(int base, int exponent)
{
    int result = 1;

    for(exponent; exponent > 0; exponent--)
    {
    result = result * base;
    }

    return (result);
}