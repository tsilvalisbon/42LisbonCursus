#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	if (fd < 0)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = n * -1;
	}
	else
		number = n;
	if (number >= 10)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd(number % 10 + 48, fd);
}