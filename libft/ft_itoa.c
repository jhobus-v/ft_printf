/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:07:52 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/06/17 19:05:39 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mallocsize(int shelf)
{
	int	i;

	i = 0;
	if (shelf <= 0)
		i++;
	while (shelf)
	{
		shelf /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*maloqueiro;
	char	*narray;
	int		i;

	narray = "0123456789";
	i = mallocsize(n);
	maloqueiro = ft_calloc(i + 1, sizeof(char));
	if (!maloqueiro)
		return (0);
	if (n == 0)
		maloqueiro[0] = '0';
	if (n < 0)
		maloqueiro[0] = '-';
	while (n)
	{
		if (n > 0)
			maloqueiro[--i] = narray[n % 10];
		else
			maloqueiro[--i] = narray[n % 10 * -1];
		n /= 10;
	}
	return (maloqueiro);
}
/*int	main(void)
{
	int	n = -623;
	printf("%s\n", ft_itoa(n));
	printf("%s\n", itoa(n));
	return (0);
}*/