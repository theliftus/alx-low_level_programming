#include "main.h"
/**
 * main - to print _putchar
 * Return: Always 0 (success)
 */
int main(void)
{
char text[8] = "_putchar";
int i;
for (i = 0; i <= 8; i++)
{
_putchsr(text[i]);
}
_putchar ('\n');
return (0);
}
