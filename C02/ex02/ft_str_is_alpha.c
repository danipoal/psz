/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:49:28 by danalvar          #+#    #+#             */
/*   Updated: 2024/10/23 15:21:56 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	isalpha;

	i = 0;
	isalpha = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] > 65 && str[i] < 90) && !(str[i] > 96 && str[i] < 122))
		{
			isalpha = 0;
		}
		i++;
	}
	return (isalpha);
}

/*int	main(void)
{
	char	str[] = "";
	int a = ft_str_is_alpha(str);
	printf("%i\n", a);

}*/