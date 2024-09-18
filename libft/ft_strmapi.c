/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:29:57 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/06/17 19:06:15 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*calloqueiro;
	int		i;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	calloqueiro = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!calloqueiro)
		return (0);
	while (s[i])
	{
		calloqueiro[i] = f(i, s[i]);
		i++;
	}
	return (calloqueiro);
}
