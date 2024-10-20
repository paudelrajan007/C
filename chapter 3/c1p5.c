#include <stdio.h>

int main() {
    char ch = 'A';
    printf("%c", ch + 1);
    return 0;
}
//output will be b due ascii table or value
#include <stdio.h>

// int main() {
//     char character = 130;
//     printf("%d", character);
//     return 0;
// }
// Correct Answer:

// -126
// Explanation:
// The code initializes a character variable named character with the value 130. However, a signed char has a range from -128 to 127, so overflow occurs, and the value wraps around to -126. The output is -126 