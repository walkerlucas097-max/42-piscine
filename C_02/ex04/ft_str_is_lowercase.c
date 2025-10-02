/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-wd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 07:59:10 by lucas-wd          #+#    #+#             */
/*   Updated: 2025/09/22 14:34:02 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	*str1 = "jimmy";
	char	*str2 = "J4MES";
	char	*str3 = "";

	printf("%s has only lower case? %d\n", str1, ft_str_is_lowercase(str1));
	printf("%s has any other characters? %d\n", str2, ft_str_is_lowercase(str2));
	printf("%s is empty? %d\n", str3, ft_str_is_lowercase(str3));
}*/
