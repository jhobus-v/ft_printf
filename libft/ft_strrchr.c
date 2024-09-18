/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:39:08 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/06/17 19:21:04 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(str);
	while (i > 0 && str[i] != (char)c)
		i--;
	if ((char)c == str[i])
		return (&str[i]);
	return (0);
}

/*int	main(void)
{
	char	*teste = "livro magica";

	printf("%s\n", teste);
	teste = ft_strchr(teste, 'i');
	printf("%s", teste);
}*/
