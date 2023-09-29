#include "main.h"

/**
 * main - prints the number of arguments passed
 * into it
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Eachtime 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
