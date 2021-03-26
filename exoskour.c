#include <stdio.h>
#include <unistd.h>

int main (int argc, char **argv)
{	
	(void)argc;
	int i = 0;
	int j = 0;

	while (argv[1][i])
		i++;
	while (i >= 0)
		write (1, &argv[1][i--], 1);
}
