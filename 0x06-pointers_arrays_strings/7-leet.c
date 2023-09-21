#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @str: string to be scanned
 * Return: changed letters
 */

char *leet(char *str);
{
int n, leetSpeak;

char *c = "aAeEoOtTlL";
char *d = "4433007711";

for (n = 0; str[n] != '\n'; n++)
{
for (leetSpeak = 0; str[leetSpeak] < 10; leetSpeak++)
{
if (str[n] == c[leetSpeak])
{
str[n] = d[leetSpeak];
}
}
}

return (str);
}
