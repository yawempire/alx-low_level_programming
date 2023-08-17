#include "3-calc.h"

int op_add(int x, int y);
int op_sub(int x, int y);
int op_mul(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);

/**
 * op_add - Sum of two numbers
 * @x: Num 1
 * @y: Num 2
 *
 * Return: Sum of (x) and (y)
 */
int op_add(int x, int y)
{
	return (x + y);
}
/**
 * op_sub - Difference of two numbers
 * @x: Num 1
 * @y: Num 2
 *
 * Return: Difference of (x) and (y)
 */
int op_sub(int x, int y)
{
	return (x - y);
}
/**
 * op_mul - Product of two numbers
 * @x: Num 1
 * @y: Num 2
 *
 * Return: Product of (x) and (y)
 */
int op_mul(int x, int y)
{
	return (x * y);
}
/**
 * op_div - Division of two numbers
 * @x: Num 1
 * @y: Num 2
 *
 * Return: Quotient of (x) and (y)
 */
int op_div(int x, int y)
{
	return (x / y);
}
/**
 * op_mod - Remainder of the division of two numbers
 * @x: Num 1
 * @y: Num 2
 *
 * Return: Remainder of division of (x) by (y)
 */
int op_mod(int x, int y)
{
	return (x % y);
}
