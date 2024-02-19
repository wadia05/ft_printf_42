/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wait-bab <wait-bab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:53:22 by wait-bab          #+#    #+#             */
/*   Updated: 2024/02/19 07:13:46 by wait-bab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
// # include <stdio.h>
# include <unistd.h>

int				ft_printf(const char *format, ...);
int				put_s(char *f);
int				put_c(char c);
int				put_d(int nb);
int				ft_base(unsigned int l, char *base);
int				padd(unsigned long nbr);

unsigned int	ft_strlen(char *l);

#endif