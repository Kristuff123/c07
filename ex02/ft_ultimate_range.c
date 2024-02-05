/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:49:21 by kristof           #+#    #+#             */
/*   Updated: 2024/02/05 21:06:15 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
		if (min >= max)
		{
				*range = NULL;
				return 0;
		}
		size_t	size;

		size = max - min;
		*range = (int *)malloc(size * sizeof(int));
		if (*range == NULL)
		{
				return -1;
		}
		int *current = *range;
		int value = min;
		while (value < max)
		{
				*current++ = value++;
		}
		return size;
}

// Example usage:
// int *arr;
// int size = ft_ultimate_range(&arr, 5, 10);
// If successful, arr will contain {5, 6, 7, 8, 9} and size will be 5.
// Remember to free the memory allocated for arr when done: free(arr);
int main() {
    int *arr;
    int size;

    // Test case 1: Valid range
    size = ft_ultimate_range(&arr, 5, 10);

    if (size < 0) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Array 1: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the memory allocated for the array
    free(arr);
/*
    // Test case 2: Invalid range
    size = ft_ultimate_range(&arr, 10, 5);

    if (size == 0) {
        printf("Empty range (invalid input).\n");
    } else if (size < 0) {
        printf("Memory allocation failed.\n");
        return 1;
    }
*/
    return 0;
}
