#include <stdio.h>
/**
 * main - main block
 * return: 0
 */
int main(void)
{
int i;
while (i < 10)
{
putchar(i + '0');
if (i < 9)
{
putchar(44);
putchar(32);
}
i++;
}
putchar('\n');
return (0);
}
