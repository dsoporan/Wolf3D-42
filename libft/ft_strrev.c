/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <dsoporan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:47:59 by dsoporan          #+#    #+#             */
/*   Updated: 2017/01/12 18:00:10 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str, int ok)
{
	int		i;
	int		j;
	char	*new;

	new = (char *)malloc(sizeof(str) + 1);
	i = ft_strlen(str) - 1;
	j = 0;
	if (ok == 1)
	{
		new[0] = '-';
		j++;
	}
	while (i >= 0)
	{
		new[j] = str[i];
		j++;
		i--;
	}
	new[j] = '\0';
	return (new);
}
