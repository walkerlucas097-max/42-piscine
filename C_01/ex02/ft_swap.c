/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-wd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:26:58 by lucas-wd          #+#    #+#             */
/*   Updated: 2025/09/16 17:46:43 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 20;
	printf("Before: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("After: x = %d, y = %d\n", x, y);
	return (0);
}*/
