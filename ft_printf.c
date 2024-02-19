/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wait-bab <wait-bab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:53:07 by wait-bab          #+#    #+#             */
/*   Updated: 2024/02/19 20:44:09 by wait-bab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	tchik(char f, va_list args)
{
	int	cont;

	cont = 0;
	if (f == 's')
		cont += put_s(va_arg(args, char *));
	else if (f == 'd' || f == 'i')
		cont += put_d(va_arg(args, int));
	else if (f == 'c')
		cont += put_c((char)va_arg(args, int));
	else if (f == 'X')
		cont += ft_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (f == 'x')
		cont += ft_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (f == 'u')
		cont += ft_base(va_arg(args, unsigned int), "0123456789");
	else if (f == 'p')
	{
		cont += write(1, "0x", 2);
		cont += padd(va_arg(args, unsigned long));
	}
	else if (f != '\0')
		cont += write(1, &f, 1);
	return (cont);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		cont;
	va_list	args;

	va_start(args, format);
	i = 0;
	cont = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (cont);
		if (format[i] == '%')
			cont += tchik(format[++i], args);
		else
			cont += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (cont);
}
