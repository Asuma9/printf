#include "main.h"
#include <unistd.h>
/**
 * _print_percent - Handles and prints the % character.
 * Return: void
 */
int _print_percent(void)
{
	char percent = '%';

	write(1, &percent, 1);

	return (1);
}
