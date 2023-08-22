#include "main.h"
#include <unistd.h>
/**
 * _string - Handles and prints string format specifier.
 * @args: va_list arguments
 *
 * Return: count of characters printed.
 */
int _string(va_list args)
{
	int cnt = 0;
	char *val = va_arg(args, char *);

	if (!val)
		val = "(nil)";

	while (*val)
	{
		write(1, val, 1);
		val++;

		cnt++;
	}
	return (cnt);
}
