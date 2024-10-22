// In C programming, puts is used to output a string followed by a newline to the console. It is part of the C standard library and is defined in the <stdio.h> header.
#include <stdio.h>

int main() {
    // Using puts to print a string with a newline
    puts("Hello, World!");

    return 0;
}
// #include <stdio.h>

// int main() {
//     char name[50];  // Declaring a character array to store the user's name

//     // Asking for user input
//     puts("Enter your name:");

//     // Reading the user's input (up to 49 characters)
//     fgets(name, sizeof(name), stdin);

//     // Outputting a greeting message with puts
//     puts("Hello,");
//     puts(name);  // The name will be printed followed by a newline

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *ptr;
//     int n = 5;
    
//     ptr = (int*) malloc(n * sizeof(int)); // Allocate memory
//     if (ptr == NULL) {
//         printf("Memory not allocated.\n");
//         return 1;
//     }
    
//     for (int i = 0; i < n; i++) {
//         ptr[i] = i + 1;
//         printf("%d ", ptr[i]);
//     }
//     free(ptr); // Free the memory
//     return 0;
// }