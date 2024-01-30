#ifndef MAIN_H
#define MAIN_H

#define buffersize 1050

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * fmt_t - Struct to represent the format specifier
 * @function: The format specifier
 * @type: Pointer to the corresponding printing function
 * @list_of_argument: Argument passed
*/
typedef struct
{
	const char type;
	int (*function)(char *, va_list list_of_argument);
} fmt_t;

int _putchar(char c);
char *_strcpy(char *destination, char *source);
int _strlen(const char *str);
char *_strncpy(char *dest, char *src, int n);
int prt_s(char *buffer, va_list list_of_argument);
int prt_c(char *buffer, va_list list_of_argument);
int prt_i(char  *buffer, va_list list_of_argument);
int prt_b(char *buffer, va_list list_of_argument);
int prt_u_i(char  *buffer, va_list list_of_argument);
int prt_o(char *buffer, va_list list_of_argument);
int prt_per(char *buffer, va_list list_of_argument);
int prt_hx_X(char *buffer, va_list list_of_argument);
int prt_hx_x(char *buffer, va_list list_of_argument);
int prt_p(char *buffer, va_list list_of_argument);
int _printf_hexadcimal_x_pointer(char *buffer, unsigned long int number);
int prt_rev(char *buffer, va_list list_of_argument);
void _print_rev_recursion(char *s);
int _print_ascii_hex(char *buffer, int hexadecimal_number);
int _print_ascii_S(char *buffer, va_list list_of_argument);
int _print_root13(char *buffer, va_list list_of_argument);
int _isdigit(int c);
int _string_printing(char *str, int width);

int _printf(const char *format, ...);


#endif
