/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:33:29 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/06/17 15:19:21 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int jota)
{
	if (jota >= 32 && jota <= 126)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%i", ft_isprint(0));
	return (0);
}*/
