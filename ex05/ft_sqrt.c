/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:40:31 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/23 16:47:06 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int x;

	x = 1;
	if (nb <= 0)
		return (0);
	while (x < 46341)
	{
		if (nb == x * x)
			return (x);
		x++;
	}
	return (0);
}

int		main(void)
{
	int nb;

	nb = 21904;
	printf("%i\n", ft_sqrt(nb));
	return (0);
}
