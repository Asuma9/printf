#include "main.h"
/**
 * *selector - fxn ptr, decides the right format call
 * @ch: passed char after specifier
 * Return: correct function
 */

int (*selector(char ch))(va_list)
{
	if (ch == 's')
	{
		return (&_string);
	}
	else if (ch == 'c')
	{
		return (&_char);
	}
	else if (ch == 'd')
	{
		return (&_decimal);
	}
	else
	return (NULL);
}
