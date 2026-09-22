#include <unistd.h>

int	main(void)
{
	int i;
	int flag;

	i = 'Z';
	flag = 0;

	while (i >= 'A')
	{
		write(1, &i, 1);
		i--;
		write(1, &i, 1);
		i--;

		if (i < 'A')
			break;

		if (flag == 0)
		{
			i += 32;
			flag = 1;
		}
		else
		{
			i -= 32;
			flag = 0;
		}
	}
	write(1, "\n", 1);
	return (0);
}