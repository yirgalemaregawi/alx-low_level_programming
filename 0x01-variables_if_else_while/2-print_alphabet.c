#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphaber in lowercase.
 * Rrturn: 0
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');

return (0);
}
