/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wait-bab <wait-bab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:52:33 by wait-bab          #+#    #+#             */
/*   Updated: 2024/02/19 07:17:06 by wait-bab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_d(int nb)
{
	char	l;
	int		cont;

	cont = 0;
	if (nb == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	else if (nb >= 0 && nb <= 9)
	{
		l = nb + 48;
		cont += write(1, &l, 1);
	}
	else if (nb < 0)
	{
		cont += write(1, "-", 1);
		cont += put_d(-nb);
	}
	else if (nb > 9)
	{
		cont += put_d(nb / 10);
		cont += put_d(nb % 10);
	}
	return (cont);
}
