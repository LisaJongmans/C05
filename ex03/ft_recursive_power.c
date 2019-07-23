/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:51:20 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/23 11:06:25 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	int answer;

	answer = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		power--;
		answer *= (ft_recursive_power(nb, power));
	}
	return (answer);
}

int		main(void)
{
	int nb;
	int power;

	nb = -8;
	power = 3;
	printf("%i\n", ft_recursive_power(nb, power));
	return (0);
}
