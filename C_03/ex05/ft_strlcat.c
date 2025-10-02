/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-wd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 03:36:04 by lucas-wd          #+#    #+#             */
/*   Updated: 2025/09/23 22:52:15 by lucas-wd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_len = i;
	j = 0;
	while (src[j] != '\0')
		j++;
	src_len = j;
	j = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (src[j] != '\0' && (dest_len + j + 1) < size)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}
/*int main(void)
{
    char dest[20] = "Hello ";
    char src[] = "World!!!";
    unsigned int size = 14;

    printf("Return: %u\n", ft_strlcat(dest, src, size));
    printf("Result: %s\n", dest);
    return (0);
}*/
