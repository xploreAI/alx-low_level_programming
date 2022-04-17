#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
char task[] = "_putchar";
int c;

for (c = 0; c < 8; c++)
{
	_putchar(task[c]);
}
_putchar('\n');
return (0);
}
