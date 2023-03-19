#include <stdio.h>

/**
* main - Test pointer value change
*
* Return: 0
*/
int main (void)
{	
	// int c[3][2][2] = {
	// 	{ {2,5}, {7,9} },
	// 	{ {3,4}, {6,1} },
	// 	{ {0,8}, {11,13} }
	// };

	// // printf("%p %p %p %p %d %p\n", c, *c, c[0], &c[0][0], c[0][0][0], c[0][0]);
	// printf("%d\n", *(c[0][0] + 1)); // 5
	// printf("%d\n", *(*(c[0] + 1))); // 7 
	// printf("%d\n", c[0][1][0]); // 
	// printf("%p\n", c + 1);
	// printf("%p\n", c[1]);
	// printf("%p\n", *(c + 1) + 1);
	// printf("%p\n", c[1][1]);

	int n = 98;
	int* p = &n;

	++*p;
	printf("%d\n", n);
	printf("%d\n", *p);
}
