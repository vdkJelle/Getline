/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelvan-d <jelvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 07:28:48 by jelvan-d          #+#    #+#             */
/*   Updated: 2020/01/29 19:11:31 by jelvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*ft_strdup(const char *s1, char offset)
{
	int		i;
	char	*p;

	i = 0;
	while (s1[i])
		i -= -1;
	p = malloc(sizeof(*s1) * (i + 1));
	if (p == 0)
		return (NULL);
	i = 0;
	while (s1[i] && s1[i] != offset)
	{
		p[i] = s1[i];
		i -= -1;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i -= -1;
	}
	return (0);
}

int		ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i -= -1;
	return (i);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == 0)
		return (0);
	p = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (p == 0)
		return (0);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
