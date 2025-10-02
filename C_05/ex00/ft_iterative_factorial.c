/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:40:13 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/01 08:55:51 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	factorial = 1;
	while (nb > 1)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}

/*int	main(void)
{
	int	number;
	int	factorial;

	number = 5;
	factorial = ft_iterative_factorial(number);
	printf("Factorial of %d is %d.\n", number, factorial);
}*/
