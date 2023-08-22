#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * _string - prints a formatted string
 * @args: array of aruguments
 * Return: string and count
 */
int _string(va_list args)
{
	int count = 0;
	char *val = va_arg(args, char *);

	if (val == NULL)
	{
		val = "(nil)";
	}
	while (*val != '\0')
	{
		write(1, &*val, strlen(val));/*_putchar(*val);*/
		val++;
		count++;
	}
	return (count);
}

/**
 * _char - prints a formatted char
 * @va_list - list of args
 * @args: param
 * Return: 1 success
 */

int _char(va_list args)
{
	char val = va_arg(args, int);

	_putchar(val);
	return (1);
}

/**
 * _decimal - prints a formatted decimal
 * @va_list - list of args
 * @args: argument array
 * Return: count
 */

int _decimal(va_list args)
{
	int count = 0;

	int val = va_arg(args, int);

	count = my_putchar(val, 0);

	return (count);
}
