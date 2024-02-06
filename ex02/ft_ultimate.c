/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:10:23 by kristof           #+#    #+#             */
/*   Updated: 2024/02/06 16:30:02 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max) {
    int 	*tab;
    int 	i;

    if (min >= max)
	{
			*range = NULL;
			return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
			return (-1);
	else
	{
			i = -1;
	}
	while (++i < max - min)
	{
			tab[i] = min + i;
			*range = tab;
	}
	return (max - min);
}

int		main(int argc, char *argv[])
{
    if (argc != 3)
	{
        printf("Usage: %s <min> <max>\n", argv[0]);
        return 1;
    }
	int		min = atoi(argv[1]);
    int		max = atoi(argv[2]);
	int		*range;
	int		size = ft_ultimate_range(&range, min, max);

    if (size == -1)
	{
			printf("Memory allocation failed!\n");
			return 1;
	}
	else if (size == 0)
	{
			printf("Invalid range!\n");
	}
	else
	{
			printf("Array of size %d created:\n", size);
			for (int i = 0; i < size; ++i)
			{
					printf("%d ", range[i]);
			}
			printf("\n");
	}
	free(range);
    return 0;
}
