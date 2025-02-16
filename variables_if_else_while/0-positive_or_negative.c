#include <stdio.h>
#include <stdlib.h>
#include <time.h>

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative

/**
 * more headers goes there
 *
 * main - Entry point
 * betty style doc for function main goes there
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("is zero\n");

if (n > 0)
{
printf("is positive\n");
}
else
{
printf("is negative\n");
}
}

return (0);
}
