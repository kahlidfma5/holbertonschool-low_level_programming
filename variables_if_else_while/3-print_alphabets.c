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
char chs = 'A';
while (chs <= 'Z')
{
putchar (chs);
chs++;

putchar('\n');
return (0);
}
