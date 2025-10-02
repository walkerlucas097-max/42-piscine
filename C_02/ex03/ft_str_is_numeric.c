/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-wd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 07:57:06 by lucas-wd          #+#    #+#             */
/*   Updated: 2025/09/22 14:41:07 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
	if (str[i] == '\0')
		return (1);
}
/*int	main(void)
{
	char	*str1 = "123";
	char	*str2 = "Gust0v";
	char	*str3 = "";

	printf("%s is numeric? %d\n", str1, ft_str_is_numeric(str1));
	printf("%s is numeric? %d\n", str2, ft_str_is_numeric(str2));
	printf("%s is numeric? %d\n", str3, ft_str_is_numeric(str3));
}*/
