/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:04:00 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/09/16 13:28:10 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *str, int printed_bytes)
{
	int	i;

	i = 0;
	while (str[i])
	{
		printed_bytes += ft_putchar_fd(str[i], 1);
		i++;
	}
	return (printed_bytes);
}
