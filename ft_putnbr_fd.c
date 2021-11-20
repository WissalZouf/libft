#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    unsigned int nb;
    if (n < 0)
    {
        nb = -1 * n;
        ft_putchar_fd('-', fd);
    }
    else
        nb = n;
    if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + 48, fd);
}
