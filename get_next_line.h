/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:42:38 by polpi             #+#    #+#             */
/*   Updated: 2022/11/23 14:30:00 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINES_H
# define GET_NEXT_LINES_H
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
# endif
/*
typedef struct Element Element;
struct Element
{
	char	*contain; 
	Element	*next;

};

typedef struct List List;
struct List
{
	Element	*first;
};
*/

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>

static char		*ft_fill_stash(int fd, char *stash);
static char		*ft_extract_line(char *stash);
//static char	ft_new_stash(char *stash);
size_t			ft_strlen(const char *str);
char			*ft_strchr(char *str, int c);
char			*ft_strjoin(char const *s1, char const *s2);
void			get_next_line_utils(void);
char			*get_next_line(int fd);

# endif