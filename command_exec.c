#include "main.h"

/**
 * command_exec - for executing
 * @instruction : user instruction
 * Return: void
 */

void command_exec(const char *instruction)
{
	pid_t run1;
	char *argv[] = {NULL};
	char *envp[] = {NULL};


	run1 = fork();
	if (run1 == -1)
	{
		perror("Can't Process");
		exit(-1);
	}
	else if (run1 == 0)
	{
		execve(instruction, argv, envp);
		perror("execution");
		exit(-1);
	}
	else if (run1 > 0)
	{
		wait(NULL);
	}
}
