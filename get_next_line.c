/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 17:39:15 by nsavry            #+#    #+#             */
/*   Updated: 2017/08/26 18:45:23 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	ft_join(char **str, char *buf)
{
	char	*tmp;

	if (*str == NULL)
		*str = ft_strdup(buf);
	else	
	{
		tmp = *str;
		*str = ft_strjoin(tmp, buf);
		free(tmp);
	}
}

static int	ft_dup(char **line, char **str, int i)
{
	char	*tmp;

	*line = ft_strndup(*str, i);
	tmp = *str;
	*str = ft_strdup(tmp + i + 1);
	free(tmp);
	return (1);
}

int			get_next_line(int const fd, char **line)
{
	static char		*str = NULL;
	char			buf[BUFF_SIZE + 1];
	int				i;
	int				ret;

	i = 0;
	if (line == NULL)
		return (-1);
	while (1)
	{
		if (str != NULL)
		{
			while (str[i] != 0 && str[i] != '\n')
				i++;
			if (str[i] == '\n' || (str[i] == 0 && ret == 0 && i != 0))
				return (ft_dup(line, &str, i));
		}
		ret = read(fd, buf, BUFF_SIZE);
		if (ret == -1)
			return (-1);
		if (ret == 0 && str != NULL && str[0] == 0)
			return (0);
		buf[ret] = 0;
		ft_join(&str, buf);
	}
}
