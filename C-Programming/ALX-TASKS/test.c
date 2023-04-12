#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main (void)
{
	printf("%d %d - %d\n", O_RDONLY, O_WRONLY, (O_WRONLY << 1));
	return 0;
}
