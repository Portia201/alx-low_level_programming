#include <stdio.h>

/**
 * main -  prints all possible different combinations of three digits
 * Return: Eachtime 0 (success)
 */
int main(void)
{
	int j = '0';
	int k = '0';
	int l = '0';

	while (j <= '7')
	{
		while (k <= '8')
		{
			while (l <= '9')
			{
				if (j < k && k < l)
				{
					putchar(j);
					putchar(k);
					putchar(l);
					if (!(j == '7' && k == '8' && l == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				l++;
			}
			l = '0';
			k++;
		}
		k = '0';
		j++;
	}
	putchar('\n');
	return (0);
}
