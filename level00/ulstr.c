#include	<unistd.h>
void	putstr(char *str)
{
	int i = 0;
	while(*str)
	{
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i]  - 32;
		}else if(str[i] >= 'A' && str[i] <= 'Z')
		{
		 	str[i] = str[i] + 32;
		}
		write(1, str, 1);
		str++;
	}
}
int	main(int argc, char *argv[])
{
	if(argc == 2)
	{
		putstr(argv[1]);
		write(1, "\n", 1);
	}else{
	 	write(1, "\n", 1);
	}
	return(0);
}
