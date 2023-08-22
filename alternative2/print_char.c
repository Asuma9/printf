#include "main.h"
#include <unistd.h>
/**
 * _char - Handles and prints character format specifier.
 * @args: va_list arguments
 *
 * Return: count of characters printed.
 */
int _char(va_list args)
{
	char val = (char)va_arg(args, int);

	write(1, &val, 1);
	return (1);
}
