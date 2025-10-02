/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-wd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 01:55:23 by lucas-wd          #+#    #+#             */
/*   Updated: 2025/09/23 19:18:06 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char	str[] = "Hello World";
	char	sub1[] = "World";
	char	sub2[] = "Test";
	char	sub3[] = "";

	printf("%s\n", ft_strstr(str, sub1));
	printf("%s\n", ft_strstr(str, sub2));
	printf("%s\n", ft_strstr(str, sub3));

	return (0);
}*/
