#include "libft.h"
#include <stdio.h>
#include <string.h>


int main() {
    char str1[50]; // Buffer for ft_bzero
    char str2[50]; // Buffer for memset

    // Test cases
    char *cases[] = {
        "Hello, World!",
        "12345",
        "abcdefg",
        "",
        "Sample text for \0testing.",
        "Another example.",
        NULL
    };

	int i = 0;
    while ( cases[i] != 0) {
        // Prepare the buffers
        strcpy(str1, cases[i]);
        strcpy(str2, cases[i]);

        // Apply ft_bzero
        ft_bzero(str1, 5); // Zero out the first 5 bytes
        // Apply memset for comparison
        ft_memset(str2, 0, 5); // Zero out the first 5 bytes

        // Print results
        printf("Original:       \"%s\"\n", cases[i]);
        printf("After ft_bzero: \"%s\"\n", str1);
        printf("After memset:   \"%s\"\n\n", str2);
		i++;
    }

    return 0;
}
