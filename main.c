// main.c

#include "libft.h"

void print_result(const char *test_name, void *dest, const char *expected, size_t size) {
    printf("%s: ", test_name);
    printf("'%.*s' ", (int)size, (char *)dest);
    printf("Expected: '%s'\n", expected);
}

int main() {
    char buffer1[50] = "Hello, World!";
    char buffer2[50] = "Hello, World!";
    char buffer3[50] = "Hello, World!";
    char buffer4[50] = "Hello, World!";
    char buffer5[50] = "Hello, World!";

    // Test Case 1: No Overlap
    ft_memmove(buffer1 + 7, buffer1, 6); // Move "Hello," to "World!"
    print_result("Test Case 1", buffer1, "Hello, Hello!", 50);

    // Test Case 2: Overlapping (src before dest)
    ft_memmove(buffer2 + 6, buffer2 + 5, 7); // Move " World!" to "Hello,"
    print_result("Test Case 2", buffer2, "Hello, World!", 50);

    // Test Case 3: Overlapping (dest before src)
    ft_memmove(buffer3 + 6, buffer3, 7); // Move "Hello, " to " World!"
    print_result("Test Case 3", buffer3, "World! World!", 50);

    // Test Case 4: Exact overlap
    ft_memmove(buffer4, buffer4, 13); // Move "Hello, World!" to itself
    print_result("Test Case 4", buffer4, "Hello, World!", 50);

    // Test Case 5: Moving zero bytes
    ft_memmove(buffer5, buffer5 + 7, 0); // No change
    print_result("Test Case 5", buffer5, "Hello, World!", 50);

    return 0;
}