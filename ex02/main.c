/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 16:37:49 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/11 16:36:50 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	*strs[12];
	int		i;

	i = 0;
	strs[0] = "42";
	strs[1] = "-42";
	strs[2] = "a42";
	strs[3] = "-a42";
	strs[4] = "4a2";
	strs[5] = "-4a2";
	strs[6] = "4-2";
	strs[7] = "4-a2";
	strs[8] = "   42";
	strs[9] = "   -42";
	strs[10] = "\t42";
	strs[11] = "\t-42";
	while (strs[i])
	{
		printf("%s", strs[i]);
		printf("%s", "\tatoi: ");
		printf("%d", atoi(strs[i]));
		printf("%s", "\tft_atoi: ");
		printf("%d", ft_atoi(strs[i]));
		printf("%s", "\n");
		i++;
	}
	return (0);
}
