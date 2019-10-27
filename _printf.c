#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>




int _process(const char *fmt, char format, va_list arguments);
void reverse(char *str, int len);
int intToStr(int x, char str[]);
/**
 * _printf - function that produces output according to a format
 *	     like printf
 * @format: format to print arguments
 * Return: int number of characters
 * On error, return 0
 */
int _printf(const char *format, ...)
{
	int i, cont = 0, len;
	char newline = '\n';
	va_list arguments;

	va_start(arguments, format);
	len = strlen(format);

	for (i = 0; i < len - 1; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			cont++;
		}
		else
		{
			cont += _process(format, format[i + 1], arguments);
			i++;
		}
	}
	write(1, &newline, 1);
	return (cont + 1);
}

/**
 * reverse - function that reverse a string
 * @str: string to reverse
 * @len: len of string
 * Return: int number of characters
 * On error, return 0
 */

void reverse(char *str, int len)
{
	int i = 0, j = len - 1, temp;
		while (i < j)
		{
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
			i++;
			j--;
		}
}

/**
 * intToStr - function that convert a int to string
 * @x: integer to convert to string
 * @str: array that containt string result
 * Return: length string result
 * On error, return 0
 */
int intToStr(int x, char str[])
{
	int i = 0;
		while (x)
		{
			str[i++] = (x % 10) + '0';
			x = x / 10;
		}
	reverse(str, i);
	str[i] = '\0';
	return (i);
}

/**
 * _process - function that analize format(%) to print
 * @fmt: complet format
 * @format: char indicator for format(char after %)
 * @arguments: list of variadic arguments
 * Return: length string result
 * On error, return 0
 */
int _process(const char *fmt, char format, va_list arguments)
{
	char c;
	char sint[11];
	int i;
	int x;
	char *s;

	i = 0;
if (format != '%')
{
	switch (format)
	{
	case '%':
		c = '%';
		write(1, &c, 1);
		break;
	case 'c':

		c = va_arg(arguments, int);
		write(1, &c, 1);
		break;
	case 'i':
		i = va_arg(arguments, int);
		x = intToStr(i, sint);
		write(1, sint, x);
		return (x);
	case 'd':
		i = va_arg(arguments, int);
		x = intToStr(i, sint);
		write(1, sint, x);
		return (x);
	case 's':
		s = va_arg(arguments, char *);
		write(1, s, sizeof(s) + sizeof(fmt) - 1);
		return (sizeof(s) + sizeof(fmt) - 1);
	}
}
else
{
		c = '%';
		write(1, &c, 1);
}
		return (1);
}