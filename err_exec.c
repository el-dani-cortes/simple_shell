#include "holberton.h"
/**
 * err_exec - Function to print the error when execve fail.
 *
 * Arguments:
 *        @argv:     - Pointer to array of arguments.
 * @command_Num:     - Number to count commands input.
 *
 *  Return:          - Always 127 when it can't execute the program.
 *
 * |----------------------- Written by Daniel Cortes ------------------------|
 * |--------------------------- and Diego Lopez -----------------------------|
 * |---------------------------- November 2020 ------------------------------|
 */
void err_exec(char **argv, unsigned int command_Num)
{
	int i = 0;

	write(STDERR_FILENO, "./hsh: ", 7);
	_itoa(command_Num);
	write(STDERR_FILENO, ": ", 2);
	for (i = 0; argv[0][i]; i++)
	{}
	write(STDERR_FILENO, argv[0], i);
	write(STDERR_FILENO, ": not found\n", 12);
	free_exec(argv);
	exit(127);
}