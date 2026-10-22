#include "libft.h"

static int	n_length(int n)
{
	int	length = 0;

	if (n == 0)
		return (1);
	if (n < 0)
		length++;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	size_t	length;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = n_length(n);
	result = malloc(length + 1);
	if (!result)
		return (NULL);
	result[length] = '\0';
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		result[--length] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}