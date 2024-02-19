/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wait-bab <wait-bab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:52:28 by wait-bab          #+#    #+#             */
/*   Updated: 2024/01/28 10:52:29 by wait-bab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	padd(unsigned long nbr)
{
	int		cont;
	char	*base;

	cont = 0;
	base = "0123456789abcdef";
	if (nbr < 16)
	{
		cont += put_c(base[nbr]);
	}
	else
	{
		cont += padd(nbr / 16);
		cont += padd(nbr % 16);
	}
	return (cont);
}
