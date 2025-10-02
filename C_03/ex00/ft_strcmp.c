/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-wd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 15:15:13 by lucas-wd          #+#    #+#             */
/*   Updated: 2025/09/23 16:47:31 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main(void)
{
    char *a = "Purple";
    char *b = "Purple";
    char *c = "Purplo";
    char *d = "Purpl";
    char *e = "";

    printf("cmp(a,b) = %d (expect 0)\n", ft_strcmp(a, b));
    printf("cmp(a,c) = %d (expect negative)\n", ft_strcmp(a, c));
    printf("cmp(c,a) = %d (expect positive)\n", ft_strcmp(c, a));
    printf("cmp(a,d) = %d (expect positive)\n", ft_strcmp(a, d));
    printf("cmp(d,a) = %d (expect negative)\n", ft_strcmp(d, a));
    printf("cmp(e,e) = %d (expect 0)\n", ft_strcmp(e, e));
    return (0);
}*/
