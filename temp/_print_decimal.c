#include <unistd.h>
#include "main.h"
/**
 * _print_int - a function that prints an integer.
 * @n: the integer to be printed.
 * Return: returns the number of chars printed.
 * Also returns -1 in case of error due to write.
 */
int _print_int(int n)
{
	char c;
	int count = 0;

	/**
	 * If the integer is less than 0, print the negative char.
	 * following that, convert n to positive for subsequent operation.
	 */
	if (n < 0)
	{
		c = '-';
		count = count + write(1, &c, 1);

		n = -n;
	}

	/**
	 * if the int is absolute and less than 10, convert it and print.
	 * This is the base case for recursion.
	 */
	if (n < 10)
	{
		c = '0' + n;
		count += (write(1, &c, 1));
		return (count);
	}

	/* recursive case */
	count = count + _print_int(n / 10);

	c = '0' + n % 10;
	count += write(1, &c, 1);

	return (count);
}
