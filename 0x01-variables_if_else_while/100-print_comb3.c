#include <stdio>                                                                
/*
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int nums;

for (num = '0'; nums <= '9'; nums++)
{
putchar(nums);
if (nums == '9')
{
continue;
}
else
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

