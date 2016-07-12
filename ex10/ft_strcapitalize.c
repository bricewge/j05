/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 16:44:47 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/12 19:08:10 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_upcase(char str)
{
	if (str >= 'a' && str <= 'z')
		str = str - ' ';
	return (str);
}

char	ft_lowcase(char str)
{
	if (str >= 'A' && str <= 'Z')
		str = str + ' ';
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		fst_letter;

	i = 0;
	fst_letter = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (fst_letter == 1)
			{
				str[i] = ft_upcase(str[i]);
				fst_letter = 0;
			}
			else
				str[i] = ft_lowcase(str[i]);
		}
		else
			fst_letter = 1;
		i++;
	}
	return (str);
}
