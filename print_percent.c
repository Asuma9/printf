#include "main.h"
#include <unistd.h>
/**
 * _percentage - Handles and prints the % character.
 * @args: va_list arguments (unused in this case)
 *
 * Return: count of characters printed.
 */
int _percentage(va_list args)
{
	char percent_char = '%';

	(void)args; /* args is unused */
	write(1, &percent_char, 1);
	return (1);
}
