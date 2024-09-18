/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:42:27 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/06/19 17:32:25 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int			pepe;
	unsigned char			*destination;
	const unsigned char		*copied;

	if (!dest && !src)
		return (0);
	pepe = 0;
	destination = dest;
	copied = src;
	while (pepe < n)
	{
		destination[pepe] = copied[pepe];
		pepe++;
	}
	return (destination);
}

/*int main(void)
{
  char source[] = "bums";
  size_t source_size = 0;
  while(source[source_size] != '\0')
  {
	source_size++;
  }
  char destination[] = "carsarecoolerthanyouthink";
  printf("%s\n", destination);
  ft_memcpy(destination, source, source_size);
  printf("%s\n", destination);
  return 0;
}*/
