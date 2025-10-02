/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-wd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:57:00 by lucas-wd          #+#    #+#             */
/*   Updated: 2025/09/22 19:12:04 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	*str1 = "T7st";
	char	*str2 = "Test";
	char	*str3 = "";
	
	printf("%s is alpha? %d\n", str1, ft_str_is_alpha(str1));
	printf("%s is alpha? %d\n", str2, ft_str_is_alpha(str2));
	printf("%s in alpha? %d\n", str3, ft_str_is_alpha(str3));
}*/
