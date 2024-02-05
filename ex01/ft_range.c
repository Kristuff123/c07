/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:16:08 by kristof           #+#    #+#             */
/*   Updated: 2024/02/05 09:40:37 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
		int		*array;
		int		i;

		i = 0;
		if (min >= max)
				return (NULL);
		array =(int *)malloc(sizeof(int) * (max - min));
		while (min < max)
		{
				array[i] = min;
				min++;
				i++;
		}
		return (array);
}
/*
int		main(int argc, char *argv[])
{
		if (argc != 3)
		{
				printf("error. usage: %s <min> <max>\n", argv[0]);
				return (1);
		}
		int	min = atoi(argv[1]);
		int max = atoi(argv[2]);
		int *out = ft_range(min,max);
		int	i = 0;
		while (i < (max - min))
		{
			printf("%d", out[i]);
			i++;
		}
		printf("\n");
		return(0);
}*/
