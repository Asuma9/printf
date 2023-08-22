#include "main.h"
#include <unistd.h>
/**
 * my_putchar - Prints an integer as a character.
 * @a: the integer
 * @count: count of characters printed so far
 *
 * Return: count of characters printed.
 */
int my_putchar(int a, int count)
{
	int c1 = a;
	char digit;

	if (a < 0)
	{
		c1 = -a;
		write(1, "-", 1);
		count++;
	}
	if (c1 / 10)
		count = my_putchar(c1 / 10, count);
	digit = c1 % 10 + '0';
	write(1, &digit, 1);

	return (count + 1);
}
