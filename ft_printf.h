/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fshields <fshields@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:59:53 by fshields          #+#    #+#             */
/*   Updated: 2023/11/21 13:59:54 by fshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);
int				how_long(int n);
int				write_hex(unsigned int n, char type);
int				write_hex_long(unsigned long int n);
int				write_mem_addr(void *ptr);
int				write_int(int n);
int				write_u(unsigned int n);
unsigned int	how_long_u(unsigned int n);
int				how_long_hex(unsigned int n);
int				how_long_hex_long(unsigned long int n);
int				execute_c(va_list *ap);
int				execute_s(va_list *ap);
int				execute_i(va_list *ap);
int				execute_x(va_list *ap, char type);
int				execute_p(va_list *ap);
int				execute_u(va_list *ap);
int				execute_perc(void);

#endif