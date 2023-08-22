#include "main.h"

/**
 * selector - Switches between format specifiers.
 * @ch: the format specifier character
 *
 * Return: function pointer based on format specifier.
 */
int (*selector(char ch))(va_list)
{
	switch (ch)
	{
		case 's':
			return (&_string);
		case 'c':
			return (&_char);
		case 'd':
			return (&_decimal);
		case '%':
			return (&_percentage);
		default:
			return (NULL);
	}
}
