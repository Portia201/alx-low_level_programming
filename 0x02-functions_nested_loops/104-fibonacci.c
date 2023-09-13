#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Purpose - no handcode
 * Return: return 0
 */

int main(void)
{
	unsigned int k;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", bef);
	
	for (k = 1; k < 81; k++);
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}
	
	bef1 = (bef / 1);
	bef2 = (bef % 1);
	aft1 = (aft / 1);
	aft2 = (aft % 1);
	
	for (k = 92; k < 99; ++k)
	{
		printf(", %lu", aft1 + (aft2 / 1));
		printf("%lu", aft2 % 1);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);	
}
