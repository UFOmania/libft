#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i = 0;
	//char *s[] = {"12345","a1234","--1234","-1234ab6757","",0};
	char *s[] = {
        "12345",              // Valid positive integer
        "a1234",              // Leading non-numeric character
        "--1234",             // Multiple leading signs
        "-1234ab6757",        // Valid negative integer with trailing non-numeric
        "",                   // Empty string
        "    +42",            // Leading whitespace with plus sign
        "   -42",             // Leading whitespace with minus sign
        "42 is the answer",   // Valid integer with trailing text
        "2147483647",         // Max int
        "-2147483648",        // Min int
        " + 123",             // Space between sign and number
        "    - 123",          // Space between sign and number
        "123abc456",          // Valid integer followed by letters
        "abc123",             // Letters before number
        "0000123",            // Leading zeros
        "  000-42abc",       // Leading zeros and whitespace with trailing text
        "   0",               // Just zero
        "-0",                 // Negative zero
        "+0",                 // Positive zero
        "    1.5",            // Decimal value (should be 1)
        "999999999999999999", // Large number (should overflow)
        "2147483648",         // Value just over max int (should overflow)
        "-2147483649",        // Value just under min int (should overflow)
        "  +  1 2 3",         // Spaces between numbers
        "   -  -5",           // Invalid: spaces between sign and number
        "5.0",                // Decimal value (should be 5)
        0
    };
	while(s[i])
	{
		printf("case : %s --> %d\n",s[i],ft_atoi(s[i]));
		printf("case : %s --> %d\n\n",s[i],atoi(s[i]));
		i++;
	}
	
}