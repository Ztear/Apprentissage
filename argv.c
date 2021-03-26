#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	printf("%d\n", argc);
	while (argv[j])
	{
		while (argv[j][i])
			write(1, &argv[j][i++], 1);
		write (1, "\n", 1);
		j++;
		i = 0;
	}
	write(1, "\n", 1);
}
