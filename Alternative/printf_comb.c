#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _print_string(char *str)
{
	int count;

	while (*str)
	{
		write(1, str, 1);
		str++;
		i++;
	}
	return (count);
}

int _print_char(char c)
{
	write(1, &c, 1);
}

int _print_percent(void)
{
	write(1, '%', 1);
}

int _printf(const char *format, ...)
{
	char *s;
	char c;

	int counter = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 's':
					s = va_arg(args, char *);
					counter += _print_string(s);
					format++;
					break;
				case 'c':
					c = va_arg(args, int);
					counter += _print_char(c);
					format++;
					break;
				case '%':
					counter += _print_percent();
					format++;
					break;
				default:
					counter += write(1, format - 1, 2);
					format;
					break;
			}
		}
		else
		{
			counter = write(1, format, 1);
			formart++;
		}
	}
	va_end(args);
	return (counter);
}
