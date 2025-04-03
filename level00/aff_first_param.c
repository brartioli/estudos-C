#include	<unistd.h>
void	putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		write(1, "\n", 1);
	}
	else if (argc > 1)
	{
		putstr(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}
