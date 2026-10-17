#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size = 0;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[size] = min;
		min++;
		size++;
	}
	return (size);
}