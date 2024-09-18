/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:33:28 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/09/16 13:17:51 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexa(unsigned int hexa)
{
	int			printed_bytes;
	const char	*hex_digits;

	hex_digits = "0123456789abcdef";
	printed_bytes = 0;
	if (hexa >= 16)
	{
		printed_bytes += ft_puthexa(hexa / 16);
	}
	printed_bytes += ft_putchar_fd(hex_digits[hexa % 16], 1);
	return (printed_bytes);
}
