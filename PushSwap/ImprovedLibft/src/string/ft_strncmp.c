#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*temps1;
	unsigned char	*temps2;

	i = 0;
	temps1 = (unsigned char *)s1;
	temps2 = (unsigned char *)s2;
	while (i < n)
	{
		if (temps1[i] != temps2[i] || temps1[i] == '\0')
		{
			return (temps1[i] - temps2[i]);
		}
		i++;
	}
	return (0);
}