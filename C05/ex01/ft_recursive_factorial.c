/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:39:09 by danalvar          #+#    #+#             */
/*   Updated: 2024/11/02 22:54:05 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	sum;

	sum = 1;
	if (nb > 1)
		sum = ft_recursive_factorial(nb - 1);
	return (sum * nb);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argsv[])
{
	int	a;
	int	nb;

	if (argc == 2)
	{
		nb = atoi(argsv[1]);
		a = ft_recursive_factorial(nb);
		printf("%i\n", a);
	}
	return (0);
}
