/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 15:29:52 by nsavry            #+#    #+#             */
/*   Updated: 2017/08/27 15:29:53 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strndup(char *str, int n)
{
	int		i;
	char	*new;

	i = 0;
	new = malloc(sizeof(char) * (n + 1));
	i = 0;
	while (i < n)
	{
		new[i] = str[i];
		i++;
	}
	new[n] = 0;
	return (new);
}
