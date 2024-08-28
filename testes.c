/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:50:41 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/08/28 12:40:43 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	main(void)
{
	char	*str = "peidohero";

	printf("esse numero: %p\n", str);
	printf("meu version:");
	ft_printptr((unsigned long long)str);
}