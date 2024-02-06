/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:51:34 by kristof           #+#    #+#             */
/*   Updated: 2024/02/05 22:14:22 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src) {
    // Check if the source string is NULL
    if (src == NULL) {
        return NULL;
    }

    // Find the length of the source string
    size_t length = 0;
    while (src[length] != '\0') {
        length++;
    }

    // Allocate memory for the new string (including the null terminator)
    char *duplicate = (char *)malloc((length + 1) * sizeof(char));

    // Check if memory allocation was successful
    if (duplicate == NULL) {
        return NULL; // Return NULL in case of failure
    }

    // Copy the contents of the source string to the new string
    size_t i = 0;
    while (src[i] != '\0') {
        duplicate[i] = src[i];
        i++;
    }
rc
    // Add the null terminator to the new string
    duplicate[i] = '\0';

    return duplicate;
}

// Example usage:
// char *original = "Hello, World!";
// char *duplicate = ft_strdup(original);
// Remember to free the memory allocated for duplicate when done: free(duplicate);

