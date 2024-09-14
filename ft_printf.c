/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnny <johnny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:32:05 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/09/05 21:11:00 by johnny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf/libft.h"

int	ft_printf(const char *print, ...)
{
	int		i; 
	i = 0;
	int		printed_bytes; 
	printed_bytes = 0;
	va_list	armongus;
	va_start(armongus, print);

	while (print[i])
	{
		if (print[i] == '%')
		{
			i++;
			if (print[i] == '%')
				printed_bytes += ft_putchar_fd('%', 1);
			else if (print[i] == 'c')
				printed_bytes += ft_putchar_fd(va_arg(armongus, int), 1);
			else if (print[i] == 's')
				printed_bytes += ft_putstr_fd(va_arg(armongus, char *), 1);
			else if (print[i] == 'i' || print[i] == 'd')
				printed_bytes += ft_putnbr_fd(va_arg(armongus, int), 1);
			else if (print[i] == 'u')
				printed_bytes += ft_putnbr_u_fd(va_arg(armongus, unsigned int), 1);
			else if (print[i] == 'p')
				printed_bytes += ft_printptr((uintptr_t)va_arg(armongus, void *));
			else if (print[i] == 'x')
				printed_bytes += ft_puthexa(va_arg(armongus, unsigned int));
			else if (print[i] == 'X')
				printed_bytes += ft_puthex_upper(va_arg(armongus, unsigned int));
			i++;
		}
		else
		{
			printed_bytes += ft_putchar_fd(print[i], 1);
			i++;
		}
	}
	va_end(armongus);
	return (printed_bytes);
}

int main()
{
    char *str = "123";
    int number = 42;
    unsigned int unsigned_number = 123456;
    void *ptr = malloc(1); // Allocate a small block of memory for pointer testing

	printf("value of printf mine:%i\n", ft_printf("hi!:%%"));
	printf("value of printf original:%i\n", printf("hi!:%%"));

    // Test %c
    ft_printf("Character: %c\n", 'A');
	printf("Character original: %c\n", 'A');

    // Test %s
    ft_printf("String: %s\n", str);
	printf("String original: %s\n", str);

    // Test %d and %i
    ft_printf("Integer (signed)d: %d\n", number);
    ft_printf("Integer (signed)i: %i\n", number);
	printf("Integer (signed) originald : %d\n", number);
    printf("Integer (signed) originali: %i\n", number);

    // Test %u
    ft_printf("Unsigned integer: %u\n", unsigned_number);
	printf("Unsigned integer original: %u\n", unsigned_number);

    // Test %x (lowercase hexadecimal)
    ft_printf("Hexadecimal (lowercase): %x\n", unsigned_number);
	printf("Hexadecimal (lowercase)original: %x\n", unsigned_number);

    // Test %X (uppercase hexadecimal)
    ft_printf("Hexadecimal (uppercase): %X\n", unsigned_number);
	printf("Hexadecimal (uppercase)original: %X\n", unsigned_number);

    // Test %p (pointer address)
    ft_printf("Pointer address: %p\n", ptr);
	printf("Pointer address original: %p\n", ptr);

    // Test % with no format specifier
    ft_printf("Percentage sign: %%\n");
	printf("Percentage sign original: %%\n");

    // Free allocated memory
    free(ptr);

    return 0;
}
