#include <stdio.h>
/**
 * main - main block
 * Description: use `putchar` to ptint all letters but the letter 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
if (c != 'q' && c != 'e')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
