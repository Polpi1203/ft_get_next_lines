/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:42:39 by polpi             #+#    #+#             */
/*   Updated: 2022/11/17 16:06:14 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//char	*get_next_line(int fd)

int	main (int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int	fd;

	fd = open("text.txt", O_RDONLY);
	printf("%d", fd);
}