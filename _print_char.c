#include "main.h"
#include <unistd.h>
/**
 * _print_char - Handles and prints character format specifier.
 * @c: character to print
 * Return: 0 success
 */
int _print_char(char c)
{
	return (write(1, &c, 1));
}
