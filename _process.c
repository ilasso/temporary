#include "holberton.h"
/**
 * _process - function that analize format(%) to print
 * @format: char indicator for format(char after %)
 * @arguments: list of variadic arguments
 * Return: length string result
 * On error, return 0
 */
int _process(char format, va_list arguments)
{
	char c;
	char sint[11];
	int i;
	int x;
	char *s;
	unsigned int u;

	i = 0;
	switch (format)
	{
		case 'c':
			c = va_arg(arguments, int);
			write(1, &c, 1);
			break;
		case 'b':
		case 'd':
		case 'i':
			i = (int) va_arg(arguments, int);
			i = format == 'b' ? binario(i) : i;
			x = intToStr(i, sint);
			write(1, sint, x);
			return (x);
		case 's':
			s = va_arg(arguments, char *);
			if (s == NULL)
				s = "(null)";
			write(1, s, strlen(s));
			return (strlen(s));
		case 'u':
			u = va_arg(arguments, unsigned int);
			x = UintToStr(u, sint);
			write(1, sint, x);
			return (x);
		default:
			c = '%';
			write(1, &c, 1);
			write(1, &format, 1);
	}
		return (1);
}
