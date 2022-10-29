#include <stdio.h>
/**
 * main - main block
 * Description: print all numbers of base 10, string from 0.
 * return: 0
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
