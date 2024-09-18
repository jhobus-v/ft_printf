/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:46:03 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/05/20 15:02:33 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*fusion;

	fusion = malloc(sizeof(char)
			* ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!fusion)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		fusion[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		fusion[i + j] = s2[j];
		j++;
	}
	fusion[i + j] = '\0';
	return (fusion);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%s", ft_strjoin(argv[1], argv[2]));
	}
}*/
