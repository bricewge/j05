/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 17:20:25 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/12 21:14:54 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] < ' '))
			return (0);
		i++;
	}
	return (1);
}