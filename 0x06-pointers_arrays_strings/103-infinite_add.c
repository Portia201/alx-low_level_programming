#include "main.h"
#include <stdio.h>
/**
 * infinite_add - function that adds two numbers.
 * @n1: num 1
 * @n2: num 2
 * @r: buffer
 * @size_r: size of buffer
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c_len = 0, d_len = 0, carry = 0, c, d, sum, biggest;

	while (n1[c_len] != '\0')
		c_len++;
	while (n2[d_len] != '\0')
		d_len++;
	if (c_len > d_len)
		biggest = c_len;
	else
		biggest = d_len;
	if ((biggest + 1) >= size_r)
		return (0);
	r[biggest + 1] = '\0';

	while (biggest >= 0)
	{
		c = (n1[c_len - 1] - '0');
		d = (n1[d_len - 1] - '0');
			if (c_len > 0 && d_len > 0)
				sum = c + d + carry;
			else if (c_len < 0 && d_len > 0)
				sum = d + carry;
			else if (c_len > 0 && d_len < 0)
				sum = c + carry;
			else
				sum = carry;			
			if (sum > 9)
			{
				carry = sum / 10;
				sum = (sum % 10) + '0';
			}
			else
			{
				carry = 0;
				sum = sum + '0';
			}
			r[biggest] = sum;
				c_len--;
				d_len--;
				biggest--;
			}
			if  (*(r) != 0)
				return (r);
			else
				return (r + 1);
}
