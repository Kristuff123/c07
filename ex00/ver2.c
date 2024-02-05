/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:42:23 by kristof           #+#    #+#             */
/*   Updated: 2024/02/05 17:07:33 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

unsigned int	get_len(char *str)
{
		unsigned int	i;

		i = 0;
		while (str[i] != '\0')
				i++;
		return (i);
}

char	*str_cpy(char *src, char *dest)
{
		unsigned int	i;
		i = 0;
		while (src[i] != '\0')
		{
				dest[i] = src[i];
				i++;
		}
		dest[i] = '\0';
		return (dest);
}

char	*ft_strdup(char *src)
{
		unsigned int	i;
		char	*dest;

		i = get_len(src);
		dest = (char *)malloc(sizeof(char) * i);
		if (!(dest))
				return (NULL);
		return (str_cpy(src, dest));
}

int main() {
    char original[] = "Hello, World!";
    char *duplicate;

    duplicate = ft_strdup(original);

    if (duplicate == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Original string: %s\n", original);
    printf("Duplicated string: %s\n", duplicate);

    // Don't forget to free the allocated memory
    free(duplicate);

    return 0;
}

