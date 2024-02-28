#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>


void user_command(char *instruction, size_t size);
void my_print(const char *string);
void command_exec(const char *instruction);

#endif
