/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicordie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:27:38 by nicordie          #+#    #+#             */
/*   Updated: 2023/06/09 14:56:06 by nicordie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_strlen(const char *s);
int	ft_format(va_list ap, char format, int len);
int	ft_printf(const char*str, ...);
int	ft_print_char(int c, int len);
int	ft_print_str(char *str, int len);
int	ft_print_nbr(int n, int len);
int	ft_print_unsigned(unsigned int a, int len);
int	ft_print_hex(unsigned int nbr, char format, int len);
int	ft_print_ptr(void *ptr, int len);
int	ft_print_ptr_hex(unsigned long long ptr, char *base, int len);

#endif
