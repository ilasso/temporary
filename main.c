#include <limits.h>
#include <stdio.h>
#include "holberton.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    /*void *addr;*/
    len = _printf("Character:[%c],Char 2:[%c]\n", 'H','W');
    len2 = printf("Character:[%c],Char 2:[%c]\n", 'H','W');
	printf("len=%d,len2=%d\n",len,len2);
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
	printf("len=%d,len2=%d\n",len,len2);
    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
	printf("len=%d,len2=%d\n",len,len2);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
	printf("len=%d,len2=%d\n",len,len2);
    len = _printf("Length:[%d, %i]\n", len, len);
    len2 = printf("Length:[%d, %i]\n", len2, len2);
	printf("len=%d,len2=%d\n",len,len2);
    len = _printf("varios formatos:[%d, %i,%d,%c,%s,%%,%s]\n", len, len,2147483649,'W',"Hola","Holberton");
    len2 = printf("varios formatos:[%d, %i,%d,%c,%s,%%,%s]\n", len2, len2,2147483649,'W',"Hola","Holberton");
	printf("len=%d,len2=%d\n",len,len2);
    len = _printf("varios formatos:[%d, %i,%d,%c,%s,%%,%s]\n", len, len,-2147,'W',"Hola","Holberton");
    len2 = printf("varios formatos:[%d, %i,%d,%c,%s,%%,%s]\n", len2, len2,-2147,'W',"Hola","Holberton");
	printf("len=%d,len2=%d\n",len,len2);
	len = _printf("%b\n", 98);
	len2 = printf("%b\n", 98);
	printf("len=%d, len2=%d\n",len,len2);
    ui = (unsigned int)INT_MAX + 1024;
    len = _printf("Unsigned:[%u]\n", ui);
    len2 = printf("Unsigned:[%u]\n", ui);
	printf("len=%d, len2=%d\n",len,len2);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    len = _printf("%");
    len2 = printf("%");
    printf("len=%d, len2=%d\n",len,len2);
/*    _printf("string: [%s]\n",NULL);*/
    /*printf("String: [%s]\n",NULL);
    _printf("Unknown c:[%c]\n");
    printf("Unknown c:[%c]\n");*/

    /*len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");*/
    return (0);
}
