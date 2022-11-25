/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:42:38 by polpi             #+#    #+#             */
/*   Updated: 2022/11/25 14:06:49 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINES_H
# define GET_NEXT_LINES_H
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
# endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>

static char		*ft_fill_stash(int fd, char *stash);
static char		*ft_extract_line(char *stash);
static char		*ft_new_stash(char *stash);
int				ft_strlen(const char *str);
char			*ft_strchr(char *str, int c);
char			*ft_strjoin(char const *s1, char const *s2);
char			*get_next_line(int fd);

# endif