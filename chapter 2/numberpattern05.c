//In C, you can use ANSI escape codes to display colored text in the terminal. Below is a comprehensive color table that includes foreground (text) and background colors. The code demonstrates how to print the color codes along with their respective names.

//ASCII Color Table in C

#include <stdio.h>

void printColorTable() {
    // Define the ANSI escape codes for colors
    const char *colors[] = {
        "\033[0m",   // Reset
        "\033[30m",  // Black
        "\033[31m",  // Red
        "\033[32m",  // Green
        "\033[33m",  // Yellow
        "\033[34m",  // Blue
        "\033[35m",  // Magenta
        "\033[36m",  // Cyan
        "\033[37m",  // White
        "\033[40m",  // Background Black
        "\033[41m",  // Background Red
        "\033[42m",  // Background Green
        "\033[43m",  // Background Yellow
        "\033[44m",  // Background Blue
        "\033[45m",  // Background Magenta
        "\033[46m",  // Background Cyan
        "\033[47m",  // Background White
    };

    // Define the color names
    const char *colorNames[] = {
        "Reset",
        "Black",
        "Red",
        "Green",
        "Yellow",
        "Blue",
        "Magenta",
        "Cyan",
        "White",
        "BG Black",
        "BG Red",
        "BG Green",
        "BG Yellow",
        "BG Blue",
        "BG Magenta",
        "BG Cyan",
        "BG White",
    };

    // Print the color table
    printf("ANSI Color Table:\n");
    printf("-----------------\n");
    for (int i = 0; i < sizeof(colors) / sizeof(colors[0]); i++) {
        printf("%s%-10s \033[0m  %s\n", colors[i], colorNames[i], colors[i]);
    }
}

int main() {
    printColorTable();
    return 0;
}
