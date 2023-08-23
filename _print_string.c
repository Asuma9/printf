#include "main.h"
/**
 * _print_string - prints a string
 * @str: string to be printed
 * Return: count
 */

int _print_string(char *str)
{
	int count = 0;

	if (!str)
		str = "(null)";

	while (*str)
	{
		write(1, str, 1);
		str++;
		count++;
	}
	return (count);
}

