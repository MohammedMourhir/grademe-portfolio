#include <unistd.h>


int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int i = 'a';
	while ((i > 'A' && i <= 'Z') || (i >= 'a' && i < 'z'))
	{
		write(1,&i,1);
		write(1,&i,1);
		if (i % 2 == 0)
			i += 32;
		else
			i -= 32;
		i++;
	}
	write(1,"\n",1);
	return (0);
}
