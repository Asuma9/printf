#include "main.h"
/**
 * _printf - prints to standard output
 * @format: list of format arguments
 * @...: unknown arguments
 * Return: counter
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int counter = 0;
	char spec;

	va_list args;

	va_start(args, format);

	if (format[0] == '\0')
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			spec = format[i + 1]; /* passing conversion specifier*/
			counter = counter + (*selector(spec))(args); /* calling selector func*/

			i++;
		}
		else
		{
			_putchar(format[i]);
			counter = counter + 1;
		}
		i++;
	}
	va_end(args);
	return (counter);
}
