#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - prints _putchar followed by a newline
 *
 * Return: if runs successfully return 0
 */
int main(void)
{
char str[] = {114, 95, 117, 97, 99, 104, 116, 112};
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
