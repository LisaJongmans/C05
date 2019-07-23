/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:05:43 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/23 18:40:32 by ljongman         ###   ########.fr       */
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

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

int		main(void)
{
	int nb;

	nb = 2147483645;
	printf("%i\n", ft_find_next_prime(nb));
	return (0);
}
