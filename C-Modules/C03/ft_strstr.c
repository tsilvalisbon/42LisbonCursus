char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i = 0;
	unsigned int	j = 0;

	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}