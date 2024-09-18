/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:40:42 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/20 13:10:21 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			bolsonaro;
	unsigned char	*lula;

	bolsonaro = 0;
	lula = s;
	while (bolsonaro < n)
	{
		lula[bolsonaro] = 0;
		bolsonaro++;
	}
}

/*int main(void)
{
    char fazol[] = "Gripezinha";
    ft_bzero(fazol, 4);
    printf("%s", fazol);
    return (0);
    }*/
