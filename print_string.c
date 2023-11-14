#include "main.h"

/**
 * print_str - print a string
 * @str: the string to print
 * Return: a int
 */

print_str(char *str)

{

	int count;

	count = 0;

	while (*str != '\0')
	{

		print_char((int)*str);

		++count;

		++str;
	}
	return (count);
}
