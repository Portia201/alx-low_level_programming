#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: eachtime 0 (succes)
 */
int main(void) {
	for (int first_digit = 0; first_digit <= 8; first_digit++) {
		for (int second_digit = first_digit + 1; second_digit <= 9; second_digit++) {
			putchar('0' + first_digit);
			putchar('0' + second_digit);

			if (first_digit != 8 || second_digit != 9) {
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return 0;
}
