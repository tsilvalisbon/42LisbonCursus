#include "includes/ft_printf.h"

int	print_putchar(int c)
{
	if (write(1, &c, 1) < 0)
		return (-1);
	return (1);
}

int	print_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (print_putstr("(null)"));
	while (s[i] != '\0')
	{
		print_putchar(s[i]);
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb, int *count)
{
	unsigned int	number;

	if (nb < 0)
	{
		*count += print_putchar('-');
		number = nb * -1;
	}
	else
		number = nb;
	if (number >= 10)
		ft_putnbr(number / 10, count);
	*count += print_putchar(number % 10 + 48);
}

void	ft_uputnbr(unsigned int nb, int *count)
{
	if (nb >= 10)
		ft_uputnbr(nb / 10, count);
	*count += print_putchar(nb % 10 + 48);
}
