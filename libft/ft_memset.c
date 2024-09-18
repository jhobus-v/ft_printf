/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:20:37 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/06/19 14:08:18 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int l, size_t n)
{
	unsigned char	*c;

	c = s;
	while (n > 0)
	{
		c[n - 1] = l;
		n--;
	}
	return (s);
}

/*int	main(void)
{
	char	p[] = "gorfada";
	ft_memset(p, 'j', 1);
	printf("%s\n", p);
	return (0);
}*/
