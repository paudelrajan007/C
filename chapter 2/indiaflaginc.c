#include <stdio.h>

void printIndianFlag() {
    // Top Orange Band
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 40; j++) {
            printf("\033[48;5;208m \033[0m");  // Orange color
        }
        printf("\n");
    }

    // Middle White Band with Blue Ashoka Chakra
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 40; j++) {
            if (i == 1 && j >= 18 && j < 22) {  // Placing the Ashoka Chakra (blue circle)
                printf("\033[48;5;15m\033[38;5;21m*\033[0m");  // Blue Ashoka Chakra
            } else {
                printf("\033[48;5;15m \033[0m");  // White color
            }
        }
        printf("\n");
    }

    // Bottom Green Band
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 40; j++) {
            printf("\033[48;5;34m \033[0m");  // Green color
        }
        printf("\n");
    }
}

int main() {
    printIndianFlag();
    return 0;
}
