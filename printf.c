#include "main.h"
#include <unistd.h>
/**
 * _printf - Custom printf function.
 * @format: the format string
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i = 0, counter = 0;
	char spec;
	va_list args;
	int (*func)(va_list);

	va_start(args, format);

	if (!format)
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			spec = format[i + 1];
			func = selector(spec);

			if (func != NULL)
			{
				counter += func(args);
				i++;
			}
			else
			{
				/* Print % and the next character (if it's not the end of the string) */
				write(1, &format[i], 1);
				counter++;
				if (format[i + 1] != '\0')
				{
					write(1, &format[i + 1], 1);
					counter++;
					i++;
				}
			}
		}
		else
		{
			write(1, &format[i], 1);
			counter++;
		}
		i++;
	}
	va_end(args);

	return (counter);
}
