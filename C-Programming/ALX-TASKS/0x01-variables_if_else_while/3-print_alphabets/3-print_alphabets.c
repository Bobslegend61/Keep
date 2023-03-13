#include <stdio.h>

/**
* main - Entry Point
*
* Return: 0
*/
int main (void)
{
	char lch, uch;
	
	lch = 'a';
	while (lch < 'z')
	{
		putchar(lch);
		lch++;
	}

	for(uch = 'A'; uch <= 'Z'; uch++)
	{
		putchar(uch);
	}
	putchar('\n');
}
