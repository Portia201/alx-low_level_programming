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
	int bytes, m;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (m = 0; m < bytes; m++)
	{

		if (m == bytes - 1)
		{
			printf("%2hhx", arr[m]);
			break;
		}
		printf("%2hhx", arr[m]);
	}
	return(0);
}
