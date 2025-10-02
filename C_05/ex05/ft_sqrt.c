/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:38:26 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/01 08:37:48 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	number;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	number = 1;
	while (number * number <= nb)
	{
		if (number * number == nb)
			return (number);
		number++;
	}
	return (0);
}

/*int	main(void)
{
	int	result;
	int	number;

	number = 3;
	result = ft_sqrt(number);
	printf("The root of %d is %d\n", number, result);
}*/
