/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:42:39 by polpi             #+#    #+#             */
/*   Updated: 2022/11/23 15:16:24 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*get_next_line(int fd)
{
	char	*stash;
	int		i;

	i = 0;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	while (i != 2)
	{
		stash = malloc(sizeof(char) * (ft_strlen(stash) + BUFFER_SIZE) + 1);
		if (stash == NULL)
			return (NULL);
		stash = ft_fill_stash(fd, stash);
		i++;
	}
	//printf("%s", stash);
	//stash[BUFFER_SIZE + 1] = '\0';
	return (stash);
}

//Complète ma stash à l'aide de la fonction read, en passant par un buffer
static char	*ft_fill_stash(int fd, char *stash)
{
	char	*buf;
	int		i;
	char	*res;

	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (buf == NULL)
		return (NULL);
	res = malloc (sizeof(char) * ft_strlen(stash + 1));
	i = (int)read(fd, buf, BUFFER_SIZE);
	res = ft_strjoin(stash, buf);
	printf("%s\n", res);
	res = ft_extract_line(stash);
	printf("%s\n", res);
	printf("%d\n", i);
	return (res);
} 
// Extrait de ma stash la ligne à retourner
static char	*ft_extract_line(char *stash)
{
	char	*extract_stash;
	int		len;

	len = ft_strlen(stash);

	extract_stash = malloc(sizeof(char) * len + 1);
	if(extract_stash == NULL)
		return (NULL);
	extract_stash = ft_strchr(stash, '\n');

	return (extract_stash);
}
/*
Extrait de ma stash l'excédent à la ligne précédemment retourner pour la conserver lors du prochain appel de la fonction principale
static char	ft_new_stash(char *stash)
{

} 
*/
int	main (int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int	fd;

	fd = open("text.txt", O_RDONLY);
	get_next_line(fd);
}
