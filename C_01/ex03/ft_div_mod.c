/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-wd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 12:03:12 by lucas-wd          #+#    #+#             */
/*   Updated: 2025/09/20 09:20:50 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)

{
	int	a = 45;
	int	b = 5;
	int	*div = &a; 
	int	*mod = &b;
	
	
	

	ft_div_mod(a, b, div, mod);
	printf("a = %d \n", a);
	printf("b = %d \n", b);
	return (0);
}*/
