#include <unistd.h>

int	putchar(char c)
{
	(void)c;
	write(1,&c,1);
	return (c);
}
