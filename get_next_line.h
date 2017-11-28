/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrychkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 16:17:11 by mrychkov          #+#    #+#             */
/*   Updated: 2017/06/19 16:29:45 by mrychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 42

# include "libft/libft.h"

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int						get_next_line(int const fd, char **line);

typedef struct			s_reader
{
	char				*buf;
	int					fd;
}						t_reader;
#endif
