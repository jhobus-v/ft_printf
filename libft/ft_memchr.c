/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:07:45 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/06/17 16:29:04 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((unsigned char *)str);
		str++;
		n--;
	}
	return (NULL);
}

/*int	main(void)
{
	char string[] = "teste";

	printf("%s\n", ft_memchr(string, 'e', 2));
	return(0);
}*/
