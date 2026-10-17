#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i = 0;
	size_t	j = 0;

	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while ((i + j) < len && big[i + j] == little[j]
				&& little[j] != '\0')
				j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}