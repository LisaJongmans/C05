/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:23:21 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/23 10:46:26 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int answer;

	answer = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		answer *= nb;
		power--;
	}
	return (answer);
}

int		main(void)
{
	int nb;
	int power;

	nb = 5;
	power = 7;
	printf("%i\n", ft_iterative_power(nb, power));
	return (0);
}
