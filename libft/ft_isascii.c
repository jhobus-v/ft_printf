/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:15:11 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/06/17 13:36:01 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int bola)
{
	if (bola >= 0 && bola <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%i",ft_isascii('€');
	return (0);
}*/
