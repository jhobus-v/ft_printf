/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:44:06 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/06/17 13:35:52 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int j)
{
	if (ft_isalpha(j) || ft_isdigit(j))
		return (1);
	else
		return (0);
}

/*int main(void)
{
	printf("%i", ft_isalnum(1));
	return (0);
}*/
