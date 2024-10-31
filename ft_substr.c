/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hettahir <hettahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:29:04 by hettahir          #+#    #+#             */
/*   Updated: 2024/10/30 13:58:27 by hettahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		ptr = (char *)malloc(sizeof(char));
		if (!ptr)
			return (NULL);
		ptr[0] = 0;
		return (ptr);
	}
	if (ft_strlen(s) < len + start)
		ptr = (char *)malloc((ft_strlen(s) - start + 1) * sizeof(char));
	else
		ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = start;
	j = 0;
	while (i < start + len && s[start + j])
	{
		ptr[j] = s[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

// int main(){
// 	char *s = ft_substr("hola", 0, 18446744073709551615);
// 	printf("%s\n", s);
// 	printf("%lu", strlen(s));
// }
