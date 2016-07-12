/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 16:44:47 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/12 17:11:49 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		alphanum;

	i = 0;
	alphanum = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - alphanum * ' ';
			alphanum = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			alphanum = 0;
		else
			alphanum = 1;
		i++;
	}
	return (str);
}
