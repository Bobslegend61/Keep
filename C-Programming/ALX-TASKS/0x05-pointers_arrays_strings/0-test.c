#include <stdio.h>
#include <string.h>

/**
* main - Test pointer value change
*
* Return: 0
*/
int main (void)
{	
	char s1[] = "Hello";
    char s2[] = "world!";

    printf("%d\n", strcmp(s1, s2));
    printf("%d\n", strcmp(s2, s1));
    printf("%d\n", strcmp(s1, s1));
    return (0);
}
