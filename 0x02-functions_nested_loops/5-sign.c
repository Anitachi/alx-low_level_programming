#include "main.h"
/**
 * print_sign - print the sign of the num
 * @n: assign a value
 * Return: return 1 if greater than 0 else return 0
 */

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == '0')
	{
		_putchar('0');
		return (0);
	}
		_putchar('0');
		return (0);
}
