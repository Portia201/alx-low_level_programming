#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer to string
 *
 * Return: string with leters rot13
 */
char *rot13(char *s)
{
int a, b;

char i[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; i[b] != '\0'; b++)
{
if (s[a] == i[b])
{
s[a] = rot[b];
break;
}
}
}
return (s);
}
