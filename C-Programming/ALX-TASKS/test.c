#include <stdio.h>
#include <unistd.h>

int main (void)
{
	char *num = "450";

	write(1, num, 3);
	return 0;
}
