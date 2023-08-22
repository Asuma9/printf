#include "main.h"
/**
 * my_putchar - prints formatted output
 * @a: param 1
 * @count: param 2
 * Return: count + 1 success
 */

int my_putchar(int a, int count)
{
	int c1 = a;

	if (a < 0)
	{
		c1 = -a;
		_putchar('-');
		count = count + 1;
	}

	if (c1 / 10)
	{
		count = my_putchar(c1 / 10, count);
	}
	_putchar(c1 % 10 + '0');

	return (count + 1);
}
