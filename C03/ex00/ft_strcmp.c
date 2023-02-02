/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehyildi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 02:15:51 by mehyildi          #+#    #+#             */
/*   Updated: 2022/10/25 02:22:50 by mehyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while(s1[i] != '\0' || s2[i] != '\0')
	{
		while (s1[i] == s2[i])
		{
			i++;
		}
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "fatih";
	str2 = "fatii";
	printf("%d", ft_strcmp(str1, str2));
}
