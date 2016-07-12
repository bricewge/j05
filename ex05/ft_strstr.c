/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 23:14:18 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/12 11:19:42 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
			return (&str[i]);
		i++;
	}
	return (0);
}
