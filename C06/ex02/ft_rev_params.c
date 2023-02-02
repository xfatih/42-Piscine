/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:01:25 by mehyildi          #+#    #+#             */
/*   Updated: 2022/11/01 12:30:03 by mehyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while ((str[i]) != '\0')
	{
		ft_putchar((str[i]));
		i++;
	}
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (++i < ac)
		ft_putstr(av[ac - i]);
}
