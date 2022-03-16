#include <stdio.h>
#include <ctype.h>

/**
 * main - prints _putchar followed by a newline
 *
 * Return: if runs successfully return 0
 */
int main(void)
{
char str[] = {100, 200, 300, 400, 500, 800, 700, 600};
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
