/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhobus-v <jhobus-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:26:41 by jhobus-v          #+#    #+#             */
/*   Updated: 2024/09/16 11:37:07 by jhobus-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

int	ft_printf(const char *print, ...);
int	ft_flags(va_list armongus, char cflag);
int	ft_putstr(char *str, int printed_bytes);
int	ft_puthex_upper(unsigned int hexa);
int	ft_putnbr_fd(int n, int fd);
int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putnbr_u_fd(unsigned int n, int fd);
int	ft_puthexa(unsigned int hexa);

#endif
