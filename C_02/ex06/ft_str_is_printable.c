/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-wd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:42:13 by lucas-wd          #+#    #+#             */
/*   Updated: 2025/09/22 14:36:47 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	*str1 = "~Wizards!";
	char	*str2 = "";
	char	*str3 = "±";

	printf("%s only printable? %d\n", str1, ft_str_is_printable(str1));
	printf("%s string is empty? %d\n", str2, ft_str_is_printable(str2));
	printf("%s non printable? %d\n", str3, ft_str_is_printable(str3));
}*/
