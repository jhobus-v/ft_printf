/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:36:39 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/09/16 13:10:26 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ptrlength(uintptr_t ptrsize)
{
	int	i;

	i = 0;
	if (ptrsize == 0)
		return (1);
	while (ptrsize)
	{
		ptrsize /= 16;
		i++;
	}
	return (i);
}

void	ft_calcularptr(uintptr_t ptrvalue, int *printed_bytes)
{
	if (ptrvalue >= 16)
	{
		ft_calcularptr(ptrvalue / 16, printed_bytes);
		ft_calcularptr(ptrvalue % 16, printed_bytes);
	}
	else
	{
		if (ptrvalue <= 9)
			*printed_bytes += ft_putchar_fd(ptrvalue + '0', 1);
		else
			*printed_bytes += ft_putchar_fd(ptrvalue - 10 + 'a', 1);
	}
}

int	ft_printptr(unsigned long long ptr)
{
	int	printed_bytes;

	printed_bytes = 0;
	if (!ptr)
	{
		printed_bytes += write(1, "(nil)", 5);
		return (printed_bytes);
	}
	printed_bytes += write(1, "0x", 2);
	ft_calcularptr((uintptr_t)ptr, &printed_bytes);
	return (printed_bytes);
}

/*int main() {
    int x = 42;
    int *ptr = &x;

    int printed_chars = ft_printptr((unsigned long long)ptr);

	printf("original %p", ptr);
    printf("\nNumber of characters printed: %d\n", printed_chars);
    return 0;
}*/