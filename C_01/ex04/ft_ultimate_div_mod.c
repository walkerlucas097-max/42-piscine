/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-wd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:52:18 by lucas-wd          #+#    #+#             */
/*   Updated: 2025/09/18 16:48:39 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	lo;

	div = (*a / *b);
	lo = (*a % *b);
	*a = div;
	*b = lo;
}

/*int	main(void)
{
	int	x = 40;
	int	y = 20;
	int	*a = &x;
	int	*b = &y;
	ft_ultimate_div_mod(a, b);
	printf("Result %d, Left Over %d", *a, *b);
	return (0);
}*/
