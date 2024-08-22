/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:32:05 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/08/17 18:29:13 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	ft_printf(const char *print, ...)
{
	int		i; 
	va_list	armongus;

	i = 0;
	va_start(armongus, print);
	while (print[i])
	{
		if (print[i] == '%')
		{
			if (print[i + 1] == '%')
				ft_putchar_fd('%', 1);
			else if (print[i + 1] == 'c')
				ft_putchar_fd(va_arg(armongus, char) , 1);
			else if (print[i + 1] == 's')
				ft_putstr_fd(va_arg(armongus, char*), 1);
			else if (print[i + 1] == )
		}
	}
}
int	main(void)
{

}