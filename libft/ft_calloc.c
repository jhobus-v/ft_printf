/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:48:53 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/06/19 18:00:23 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*calloc;

	if (nitems == 0 || size == 0)
	{
		calloc = malloc(0);
		if (calloc == NULL)
			return (NULL);
		return (calloc);
	}
	if ((nitems * size) / nitems != size)
		return (NULL);
	calloc = (void *) malloc(nitems * size);
	if (!calloc)
		return (0);
	ft_bzero(calloc, (nitems * size));
	return (calloc);
}
