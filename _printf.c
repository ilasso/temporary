#include "holberton.h"

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
	char c;
	va_list arguments;

	if (format == NULL)
		return (-1);

	va_start(arguments, format);
	len = strlen(format);

	if (len == 1 && format[0] == '%')
		return (-1);

	for (i = 0; i < len - 1; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			cont++;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				c = '%';
				write(1, &c, 1);
				i++;
				cont++;
			}
			else
			{
				cont += _process(format[i + 1], arguments);
				i++;
			}
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


	if (str[i] == '-')
		i++;

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

	if (x == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (1);
	}

		if (x == INT_MIN)
		{
			str[0] = '-';
			str[1] = '2';
			str[2] = '1';
			str[3] = '4';
			str[4] = '7';
			str[5] = '4';
			str[6] = '8';
			str[7] = '3';
			str[8] = '6';
			str[9] = '4';
			str[10] = '8';
			str[11] = '\0';
		return (11);
		}
		if (x < 0)
		{
			x = abs(x);
			str[i] = '-';
			i++;
		}
		while (x)
		{
			str[i++] = (x % 10) + '0';
			x = x / 10;
		}
	reverse(str, i);
	str[i] = '\0';
	return (i);
}
