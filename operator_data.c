#include "main.h"

/**
 * user_command - for accepting user data
 * @instruction : string data
 * @size : the size of the data
 *
 * Return: void
 */

void user_command(char *instruction, size_t size)
{
	if (fgets(instruction, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			my_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			my_print("Can't read data\n");
			exit(EXIT_FAILURE);
		}
	}
	instruction[strcspn(instruction, "\n")] = '\0';
}
