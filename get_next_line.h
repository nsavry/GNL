/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 17:38:57 by nsavry            #+#    #+#             */
/*   Updated: 2017/08/26 17:38:59 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 54

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		get_next_line(int const fd, char **line);

#endif
