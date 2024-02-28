#include "main.h"

/**
 * my_print - for printing a string
 * @string : the data
 * Return: returns nothing
 */

void my_print(const char *string)
{
	int size;

	size = strlen(string);
	write(STDOUT_FILENO, string, size);

}

