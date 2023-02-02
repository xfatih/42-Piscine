/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:03:53 by mehyildi          #+#    #+#             */
/*   Updated: 2022/10/28 22:15:47 by mehyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb > 0)
	{
		total *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	else if (nb < 0)
		return (0);
	return (total);
}
