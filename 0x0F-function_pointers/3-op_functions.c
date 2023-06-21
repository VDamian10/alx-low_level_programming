#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - addition operation
  * @a: first integer
  * @b: second integer
  * Return: sum of integers
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtraction operation
  * @a: first integer
  * @b: second integer
  * Return: subtraction of b from a
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplication operation
  * @a: first integer
  * @b: second integer
  * Return: multiple of integer a and b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division operation
  * @a: first integer
  * @b: second integer
  * Return: a divided by b
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - modulos operation
  * @a: first integer
  * @b: second integer
  * Return: remainder from a divided by b
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
