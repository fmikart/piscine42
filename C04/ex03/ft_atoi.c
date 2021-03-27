#include <unistd.h>

int	ft_atoi(char *str)
{
	int	negative;
	int	result;
	int	x;

	x = 0;
	result = 0;
	negative = 1;
	while (str[x])
	{		
		if (str[x] == '-')
			negative = -1;
		if (str[x] == '-' || str[x] == '+')
			x++;
		while (str[x] && (str[x] >= '0' && str[x] <= '9'))
		{
			result = result * 10;
			result = result + str[x] - '0';
			x++;
		}
		return (result * negative);
	}
}	
