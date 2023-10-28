#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * infinite_while - infinite loop
 *
 * Return: 0 always
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - creates 5 zombie processes
 *
 * Return: infintely running zombie processes
 */
int main(void)
{
	pid_t zombie_child;
	unsigned int i;

	for (i = 0; i < 5; i++)
	{
		zombie_child = fork();

		if (zombie_child == 0)
			exit(0);
		else
			printf("Zombie was created. PID: %d\n", zombie_child);
	}
	return (infinite_while());
}
