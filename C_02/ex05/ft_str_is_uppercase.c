/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-wd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:36:05 by lucas-wd          #+#    #+#             */
/*   Updated: 2025/09/22 14:34:42 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	*str1 = "J1mmy";
	char	*str2 = "JAMES";
	char	*str3 = "";

	printf("%s has only uppercases? %d\n", str1, ft_str_is_uppercase(str1));
	printf("%s has only uppercases? %d\n", str2, ft_str_is_uppercase(str2));
	printf("%s is empty? %d\n", str3, ft_str_is_uppercase(str3));
}*/
