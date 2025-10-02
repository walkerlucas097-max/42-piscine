/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-wd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:17:04 by lucas-wd          #+#    #+#             */
/*   Updated: 2025/09/18 16:49:15 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	swap;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		swap = tab [start];
		tab [start] = tab [end];
		tab [end] = swap;
		start++;
		end--;
	}
}

/*int	main(void)
{
	int	ar[] = {1, 2, 3, 4};
	int	size = 4;
	
	ft_rev_int_tab(ar, size);

	for (int i = 0; i < size; i++)
	printf("%d ", ar[i]);
	return (0);
}*/
