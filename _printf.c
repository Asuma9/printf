#include "main.h"

/**
 * _printf - prints to standard output
 * @format: argument
 * @...: unknown arguments
 * Return: output to standard
 */

int _printf(const char *format, ...)
{
	int counter = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
				counter += _print_string(va_arg(args, char *));
			else if (*format == 'c')
				counter += _print_char(va_arg(args, int));
			else if (*format == '%')
				counter += _print_percent();
			else
			{
				if (*(format + 1) != '\0')
				{
					counter += write(1, format - 1, 2);
				}
				else
				{
					counter += write(1, format - 1, 1);
				}
			}
		}
		else
		{
			counter += write(1, format, 1);
		}
		format++;
	}


	va_end(args);
	return (counter);
}
