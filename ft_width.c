/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 15:26:20 by hthomas           #+#    #+#             */
/*   Updated: 2019/12/05 17:49:51 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_zeros(int width, t_sp *sp, int len)
{
	int	i;

	i = width - len;
	if (i < 0)
		return ;
	while (i--)
	{
		ft_putchar('0');
		sp->len++;
	}
}

void	ft_spaces(int width, t_sp *sp, int len)
{
	int	i;

	i = width - len;
	if (i < 0)
		return ;
	while (i--)
	{
		ft_putchar(' ');
		sp->len++;
	}
}