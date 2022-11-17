/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:42:38 by polpi             #+#    #+#             */
/*   Updated: 2022/11/17 16:10:27 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINES_H
# define GET_NEXT_LINES_H
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>

void	get_next_line_utils(void);
char	*get_next_line(int fd);

# endif
# endif