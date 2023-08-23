#include "main.h"
#include <unistd.h>
/**
 * _print_decimal - Handles and prints decimal format specifier.
 * @a: string char
 *
 * Return: void
 */
int _print_decimal(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
		count++;
	}
	else
	{
		count += _print_decimal(n / 10);
		_putchar(n % 10 + '0');
		count++;
	}
	return (count);
}
