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

	if (!format)
		return (-1);

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				return (counter);
			switch (*format)
			{
				case 's':
					counter += _print_string(va_arg(args, char *));
					break;
				case 'c':
					counter += _print_char(va_arg(args, int));
					break;
				case '%':
					counter += _print_percent();
					break;
				default:
					counter += write(1, format - 1, 2);
					break;
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
