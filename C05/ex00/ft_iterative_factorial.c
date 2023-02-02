/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:51:59 by mehyildi          #+#    #+#             */
/*   Updated: 2022/11/01 01:35:18 by mehyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	total;

	total = 1;
	while (nb > 0)
	{
		total *= nb;
		nb--;
	}
	if (nb < 0)
		total = 0;
	return (total);
}
