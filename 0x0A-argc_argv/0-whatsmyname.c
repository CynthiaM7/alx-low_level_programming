#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: argc parameter
 * @argv: array of a command listed
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
