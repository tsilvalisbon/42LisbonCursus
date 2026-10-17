#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)dest;
	while (i < count)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}