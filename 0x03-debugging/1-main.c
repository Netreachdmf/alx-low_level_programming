#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 0;
while (i < 10)
{
putchar(i);
}
printf("Infinite loop avoided! \\o/\n"); /* the part of the code that is causing the output to go into an infinite loop */
return (0);
}
