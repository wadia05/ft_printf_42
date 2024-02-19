/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wait-bab <wait-bab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:51:28 by wait-bab          #+#    #+#             */
/*   Updated: 2024/01/28 10:51:37 by wait-bab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base(unsigned int l, char *base)
{
	int	cont;

	cont = 0;
	if (l <= ft_strlen(base) - 1)
	{
		cont += put_c(base[l]);
	}
	else
	{
		cont += ft_base(l / ft_strlen(base), base);
		cont += ft_base(l % ft_strlen(base), base);
	}
	return (cont);
}
