#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i = 0;
	int	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_size(int size, char **strs, char *sep)
{
	int	total_len = 0;
	int	i = 0;
	int	sep_len = ft_strlen(sep);

	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		total_len;

	if (size == 0)
	{
		dest = malloc(1);
		if (dest != NULL)
			dest[0] = '\0';
		return (dest);
	}
	total_len = total_size(size, strs, sep) + 1;
	dest = malloc(sizeof(char) * total_len);
	if (dest == NULL)
		return (NULL);
	dest[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
