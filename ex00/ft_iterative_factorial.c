/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:41:42 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/22 23:52:43 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int answer;

	answer = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		answer = answer * (nb - 1);
		nb--;
	}
	return (answer);
}

int		main(void)
{
	int nb;

	nb = 10;
	printf("%i\n", ft_iterative_factorial(nb));
	return (0);
}
