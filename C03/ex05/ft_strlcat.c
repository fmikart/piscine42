#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] && (len < (size - 1)))
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (len);
}

int	main(void)
{
	char r[] = {"Salutmoicestfallone\n"};
	char t[20] = {"Hello"};

	ft_strlcat(t, r, 20);
	ft_putstr(t);
	return (0);
}
