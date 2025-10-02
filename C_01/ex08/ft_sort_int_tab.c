/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-wd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:13:05 by lucas-wd          #+#    #+#             */
/*   Updated: 2025/09/18 16:52:49 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				swap = tab [j];
				tab [j] = tab [j + 1];
				tab [j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int	ar[] = {33, 4, 66, 49};
	int	size = 4;
	
	ft_sort_int_tab(ar, size);

	for (int i = 0; i < size; i++)
	printf("%d ", ar[i]);
	return (0);
}*/
