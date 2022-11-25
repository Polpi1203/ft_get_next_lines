/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:42:42 by polpi             #+#    #+#             */
/*   Updated: 2022/11/25 14:11:21 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
			i++;
	}
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
				return ((char *)str + i);
		i++;
	}
	if (str[i] == (char)c)
			return ((char *)str);
	if ((char)c == '\0')
			return ((char *)str);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char    *result;
	int		i;
	int     j;
	int     len_real;

	i = 0;
	j = 0;
	len_real = (ft_strlen(s1) + ft_strlen(s2));
	result = malloc(sizeof (char) * (len_real + 1));
	if (result == NULL)
			return (NULL);
	while (s1[i] != '\0')
	{
			result[i] = s1[i];
			i++;
	}
	while (s2[j] != '\0')
	{
			result[i] = s2[j];
			i++;
			j++;
	}
	result[i] = '\0';
	return (result);
}
