/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:32:05 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/09/19 18:21:35 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flags(va_list armongus, char cflag)
{
	int	printed_bytes;

	printed_bytes = 0;
	if (cflag == '%')
		printed_bytes += ft_putchar_fd('%', 1);
	else if (cflag == 'c')
		printed_bytes += ft_putchar_fd(va_arg(armongus, int), 1);
	else if (cflag == 's')
		printed_bytes += ft_putstr_fd(va_arg(armongus, char *), 1);
	else if (cflag == 'i' || cflag == 'd')
		printed_bytes += ft_putnbr_fd(va_arg(armongus, int), 1);
	else if (cflag == 'u')
		printed_bytes += ft_putnbr_u_fd(va_arg(armongus, unsigned int), 1);
	else if (cflag == 'p')
		printed_bytes += ft_printptr((uintptr_t)va_arg(armongus, void *));
	else if (cflag == 'x')
		printed_bytes += ft_puthexa(va_arg(armongus, unsigned int));
	else if (cflag == 'X')
		printed_bytes += ft_puthex_upper(va_arg(armongus, unsigned int));
	return (printed_bytes);
}

int	ft_printf(const char *print, ...)
{
	int		i;
	int		printed_bytes;
	va_list	armongus;

	i = 0;
	printed_bytes = 0;
	va_start(armongus, print);
	if (!print)
		return (-1);
	while (print[i])
	{
		if (print[i] == '%')
		{
			i++;
			printed_bytes += ft_flags(armongus, print[i]);
			i++;
		}
		else
		{
			printed_bytes += ft_putchar_fd(print[i], 1);
			i++;
		}
	}
	va_end(armongus);
	return (printed_bytes);
}

/*int	main(void)
{
	int	i = 0;
	int j = 0;

	i = ft_printf(NULL);
	j = printf(NULL);

	printf ("ft_printf: %d\nOriginal: %d", i, j);
	return (0);
}*/