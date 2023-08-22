#include "main.h"
/**
 * _decimal - Handles and prints decimal format specifier.
 * @args: va_list arguments
 *
 * Return: count of characters printed.
 */
int _decimal(va_list args)
{
	int val = va_arg(args, int);

	return (my_putchar(val, 0));
}
