#include "main.h"

/**
 * _print_integer - prints an integer
 * @a: integer to be printed
 * Return: integer
 */
int _print_integer(int a)
{
	write(1, &a, sizeof(int));
	return (0);
}
