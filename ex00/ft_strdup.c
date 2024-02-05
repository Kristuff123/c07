/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 08:35:39 by kristof           #+#    #+#             */
/*   Updated: 2024/02/05 08:57:11 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		check_len(char *str)
{
		int		i;

		i = 0;
		while (str[i] != '\0')
				i++;
		return (i);
}

char *str_cpy(char *str, char *dest)
{
		int		i;

		i = 0;
		while (str[i] != '\0')
		{
				dest[i] = str[i];
				i++;
		}
		dest[i] = '\0';
		return (dest);
}

char	*ft_strdup(char *src)
{
		int		i;
		char	*dest;

		i = check_len(src);
		dest = (char *)malloc(sizeof(char) * i);
		if (!(dest))
				return (NULL);
		return (str_cpy(src, dest));
}
/*
int		main(void)
{
		char	original[] = "happy coding";
		char	*duplicate = ft_strdup(original);

		if (duplicate != NULL)
		{
				printf("original: %s\n", original);
				printf("duplicate: %s\n", duplicate);
				free(duplicate);
		}
		else
		{
				printf("memory allocation failed.\n");
		}
		return (0);
}*/
