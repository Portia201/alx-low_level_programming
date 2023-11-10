#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: arguments numbers
 * @argv: arguments array
 *
 * Return: Eachtime 0 (Success)
 */
int main(int argc, char *argv[])
{
	int nbytes, m;
	char *opc = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (m = 0; m < nbytes; m++)
	{
		printf("%02x", opc[m] & 0xFF);
		if (m != nbytes - 1)
			printf(" ");
	}
	
	printf("\n");
	return (0);
}
