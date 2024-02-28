#include "main.h"

/**
 * main - a shell
 *
 * Return: always 0
 */

int main(void)
{
	char instruction[600];
	int num;

	num = 10;

	while (num == 10)
	{
		my_print("Shell$ ");
		user_command(instruction, sizeof(instruction));
		command_exec(instruction);
	}

	return (0);
}
