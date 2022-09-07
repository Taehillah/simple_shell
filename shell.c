#include "main.h"

/**
 * main - runs indefinetly in a loop
 * @ac: void
 * @av: void
 * Return: loop.
 **/
int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	signal(SIGINT, controlC);
	prompt();
	return (0);
}
