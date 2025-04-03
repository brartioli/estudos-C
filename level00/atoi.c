#include	<stdio.h>

int	ft_atoi(const char *str)
{
	int res = 0;
	int sign = 1;

	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-')
	{
		sign *= -1;
	}
	if (*str == '-' || *str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
#include	<stdlib.h>
int main()
{
	char s[]= "-12345";
	printf("%d\n", ft_atoi(s));
	printf("%d\n", atoi(s));
	return (0);
}
