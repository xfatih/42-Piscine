/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:04:51 by mehyildi          #+#    #+#             */
/*   Updated: 2022/10/19 15:17:31 by mehyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	swap;
	int	rev;

	i = 0;
	rev = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab [i] = tab [rev];
		tab [rev] = swap;
		i++;
		rev--;
	}
}
