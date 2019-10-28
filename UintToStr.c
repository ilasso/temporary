#include "holberton.h"
/**
 * UintToStr - function that convert a int to string
 * @x: integer to convert to string
 * @str: array that containt string result
 * Return: length string result
 * On error, return 0
 */
unsigned int UintToStr(unsigned int x, char str[])
{
	int i = 0;

	if (x == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (1);
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
