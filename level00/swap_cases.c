char	*ft_swap_cases(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
#include	<stdio.h>
int main()
{
	char str[]= "";
	ft_swap_cases(str);
	printf("%s\n", str);
}
