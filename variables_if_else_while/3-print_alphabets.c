#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar (ch);
ch++;
}
char ch = 'A';
while (ch <= 'Z')
{
putchar (ch);
ch++;

putchar('\n');
return (0);
}
