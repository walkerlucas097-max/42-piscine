/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:48:03 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/01 08:27:49 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(void)
{
	int	result;
	int	number;
	int	power;
	
	number = 3;
	power = 5;
	result = ft_recursive_power(number, power);
	printf("%d raised to the power of %d is %d\n", number, power, result);
	return (0);
}*/
