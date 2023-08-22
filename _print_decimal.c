#include "main.h"
#include <unistd.h>
/**
 * _print_decimal - Handles and prints decimal format specifier.
 * @a: string char
 *
 * Return: void
 */
void _print_decimal(int a)
{
	char digit = a + '0';

	write(1, &digit, 1);

}
