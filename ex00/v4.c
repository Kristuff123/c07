/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v4.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:53:33 by kristof           #+#    #+#             */
/*   Updated: 2024/02/05 20:40:44 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
    if (src == NULL)
			return NULL;
	size_t	length;

	length = 0;
    while (src[length] != '\0')
			length++;
    char *duplicate;

	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
			return NULL;
	size_t	i;

	i = 0;
    while (src[i] != '\0')
	{
			duplicate[i] = src[i];
			i++;
	}
	duplicate[i] = '\0';
	return duplicate;
}

int main()
{
		char original[] = "Hello, World!";
		char *duplicate = ft_strdup(original);
		if (duplicate == NULL)
		{
				printf("Memory allocation failed.\n");
				return 1;
		}
		printf("Original: %s\n", original);
		printf("Duplicate: %s\n", duplicate);
		free(duplicate);
		return 0;
}
