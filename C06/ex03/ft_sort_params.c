/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:16:04 by mehyildi          #+#    #+#             */
/*   Updated: 2022/11/01 12:49:40 by mehyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int ac, char **av)
{
	int		i1;
	int		i2;
	char	*tmp;

	i2 = ac;
	i1 = 1;
	while (++i1 <= ac)
	{
		i2 = 1;
		while (++i2 <= ac -1)
		{
			if (ft_strcmp(av[i2], av[i2 - 1]) < 0)
			{
				tmp = av[i2];
				av[i2] = av[i2 - 1];
				av[i2 - 1] = tmp;
			}
		}
	}
	i1 = 0;
	while (++i1 < ac)
		ft_putstr(av[i1]);
}
