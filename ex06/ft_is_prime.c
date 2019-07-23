/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:53:12 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/23 18:02:25 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int x;

	x = 2;
	while ((x < 46341) && (x < nb))
	{
		if ((nb % x) == 0)
			return (0);
		else
			x++;
	}
	return (1);
}

int		main(void)
{
	int nb;

	nb = 2147483646;
	printf("%i\n", ft_is_prime(nb));
	return (0);
}
