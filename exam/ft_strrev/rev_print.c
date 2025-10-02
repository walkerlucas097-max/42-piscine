/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-wd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:06:14 by lucas-wd          #+#    #+#             */
/*   Updated: 2025/09/30 20:39:20 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strrev(char *str)
{
	int	i;
	int	len;
	char	temp;

	len = 0;
	while (str[len])
        len++;
    
	i = 0;
	while (i < len - 1)
{

	temp = str[i];
       	str[i] = str[len - 1];
	str[len - 1] = temp;
       	i++;
        len--;
}
	return (str);
}

int	main(void)
{
	ft_strrev("string in reverse");
	write(1, "\n", 1);
	return (0);
}
