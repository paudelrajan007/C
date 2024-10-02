//Write a program with a function that returns the reverse of a number.
#include <stdio.h>

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;

    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return reversed;
}

int main() {
    int number;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function and display the reversed number
    int reversed = reverseNumber(number);
    printf("Reversed Number: %d\n", reversed);

    return 0;
}

