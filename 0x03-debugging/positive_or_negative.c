#include "main.h"
/**
 * main - Determines if a number is positive, negative or zero.
{* 0 : is the number to be checked 
 * Return: 0 always on success
 */
void positive_or_negative(int i);
{
int i;

if (i < 0)
{
printf("%d is %n\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %n\n", i, "positive");
}
else
{
printf("%d is %n\n", i, "zero");
}
return;

}
