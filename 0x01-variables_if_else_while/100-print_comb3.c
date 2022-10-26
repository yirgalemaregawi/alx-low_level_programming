#include <stdio.h>
/**
 *main - main block
 */
int main(void)
{
int i, j, k;

i = 0;
while (i < 100)
{
j = i % 10; /* singles digit */
k = i / 10; /*dobles digit */

if (k < j)
{
putchar(k + '0');
putchar(j + '0');

if (i < 89)
{
putchar(44);
putchar(32);
}
}
i++;
}
putchar('\n');
return (0);
