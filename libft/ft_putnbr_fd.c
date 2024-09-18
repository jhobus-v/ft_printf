/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:41:38 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/09/16 13:24:38 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i += ft_putchar_fd('-', fd);
		i += ft_putchar_fd('2', fd);
		i += ft_putstr_fd("147483648", fd);
	}
	else if (n < 0)
	{
		i += ft_putchar_fd('-', fd);
		n = -n;
		i += ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		i += ft_putnbr_fd(n / 10, fd);
		i += ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		i += ft_putchar_fd(n + '0', fd);
	return (i);
}
