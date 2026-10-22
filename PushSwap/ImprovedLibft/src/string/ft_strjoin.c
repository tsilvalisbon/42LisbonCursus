#include "libft.h"

static char	*ft_strdcat(char *dest, char const *s1, char const *s2)
{
	size_t	i = 0;
	size_t	j = 0;

	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	length;

	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(length + 1);
	if (!str)
		return (NULL);
	ft_strdcat(str, s1, s2);
	return (str);
}