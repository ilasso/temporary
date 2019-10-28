#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
int _process(char format, va_list arguments);
void reverse(char *str, int len);
int intToStr(int x, char str[]);
int _printf(const char *format, ...);
int binario(int num);
unsigned int UintToStr(unsigned int x, char str[]);

#endif /* HOLBERTON_H */
