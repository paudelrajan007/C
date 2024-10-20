/* The putchar() function in C is used to output a single character to the standard output (usually the console). It's part of the C standard input/output library, defined in <stdio.h>. The primary use of putchar() is when you want to print characters one at a time. 

Common Uses of putchar():
1) Printing characters one by one: putchar() is useful for printing individual characters, especially when dealing with character arrays, strings, or in loops.

2) Efficient printing in loops: You can use putchar() inside loops to print multiple characters without using more complex functions like printf().

3) Handling newlines: putchar() can be used to handle newline (\n) explicitly when printing output.

putchar() does not need any format specifiers. It simply prints the character you pass to it. For example:
 */
#include <stdio.h>

int main() {
    for (int i = 65; i <= 90; i++) { // ASCII values for A-Z
        putchar(i);   // Prints the corresponding character for the ASCII value
    }
    
    putchar('\n'); // Print newline after the alphabet
    
    return 0;
}
//output ABCDEFGHIJKLMNOPQRSTUVWXYZ
// #include <stdio.h>

// int main() {
//     char str[] = "Hello, World!";
    
//     // Loop through the string until we hit the null terminator
//     for (int i = 0; str[i] != '\0'; i++) {
//         putchar(str[i]);  // Print each character
//     }

//     putchar('\n'); // Print a new line at the end
    
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     // Using putchar to print each character of the word "putchar"
//     putchar('p');
//     putchar('u');
//     putchar('t');
//     putchar('c');
//     putchar('h');
//     putchar('a');
//     putchar('r');
//     putchar('\n'); // Move to a new line after printing the word
    
//     return 0;
// }


