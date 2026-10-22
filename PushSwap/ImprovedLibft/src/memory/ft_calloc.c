#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;
	size_t	total_size;

	if (!nmemb || !size)
		return (str = malloc(0));
	if (size != 0 && nmemb >= (size_t)-1 / size)
		return (NULL);
	total_size = nmemb * size;
	str = malloc(total_size);
	if (!str)
		return (NULL);
	ft_bzero(str, total_size);
	return (str);
}