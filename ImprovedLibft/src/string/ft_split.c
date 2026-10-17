#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	i = 0;
	int	count = 0;

	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*word_alloc(char const **s, char c)
{
	char		*word;
	char const	*str;
	int			length = 0;

	while (**s && **s == c)
		(*s)++;
	str = (*s);
	while (**s && **s != c)
	{
		(*s)++;
		length++;
	}
	word = malloc(length + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, str, length + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		n_string;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	n_string = count_word(s, c);
	result = malloc(sizeof(char *) * (n_string + 1));
	if (!result)
		return (NULL);
	result[n_string] = NULL;
	while (i < n_string)
	{
		result[i] = word_alloc(&s, c);
		if (!result[i])
		{
			while (i--)
				free(result[i]);
			free(result);
			return (NULL);
		}
		i++;
	}
	return (result);
}