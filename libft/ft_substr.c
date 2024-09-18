/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:55:27 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/06/17 18:04:33 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_tester(unsigned int start, size_t len, char const *s)
{
	if (start > ft_strlen(s))
		len = 0;
	else if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	char		*rtn;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	len = len_tester(start, len, s);
	str = (char *)s;
	rtn = (char *)malloc(sizeof (char) * (len + 1));
	if (!rtn)
		return (NULL);
	while (str[i] != '\0')
	{
		if (len > 0 && i >= start)
		{
			rtn[j++] = str[i];
			len--;
		}
		i++;
	}
	rtn[j] = '\0';
	return ((char *)rtn);
}

/*int	main(int argc, char** argv)
{
	if (argc == 2)
	{
		printf("%s\n", ft_substr(argv[1], 2, 2));
	}
}*/
