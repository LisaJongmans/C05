/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:45:29 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/23 10:21:52 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int answer;

	answer = nb;
	if (nb < 0)	
		return (0);
	if (nb == 0)
		return (1);
	nb--;
	if (nb > 1)
		answer *= (ft_recursive_factorial(nb));
	return (answer);
}

int		main(void)
{
	int nb;
	nb = 10;
	printf("%i\n", ft_recursive_factorial(nb));
	if (nb < 0)
	return (0);
}
