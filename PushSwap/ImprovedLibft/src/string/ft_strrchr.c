#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (s + i);
		i--;
	}
	return (NULL);
}