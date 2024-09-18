/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:34:18 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/06/17 19:21:05 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		f;
	char	*trimmed;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	i = 0;
	f = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	if ((i - 1) == f)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[f]) && s1[f])
		f--;
	trimmed = ft_substr(s1, i, f - i + 1);
	return (trimmed);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%s", ft_strtrim(argv[1], argv[2]));
	}
}*/
