/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:42:39 by polpi             #+#    #+#             */
/*   Updated: 2022/11/18 07:41:22 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buffer;
	char	*stash;
	int		res;

	buffer = NULL;
	res = read(fd, buffer, BUFFER_SIZE);
	printf("%d", res);
	printf("%s", buffer);


	return ("few");
}

int	main (int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int	fd;

	fd = open("text.txt", O_RDONLY);
	get_next_line(fd);
}