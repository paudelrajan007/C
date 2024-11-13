// #include <stdio.h>

// void display(int array[], int array_length) {
//     printf("Enter %d elements:\n", array_length);
//     for (int i = 0; i < array_length; i++) {
//         scanf("%d", &array[i]);
//     }
// }

// void printArray(int array[], int array_length) {
//     printf("The elements of the array are:\n");
//     for (int i = 0; i < array_length; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int array[100];
//     int array_length;

//     printf("Enter array length: ");
//     scanf("%d", &array_length);

//     // Check if the length is within the valid range
//     if (array_length > 100 || array_length <= 0) {
//         printf("Invalid array length. Please enter a value between 1 and 100.\n");
//         return 1;
//     }

//     // Read elements into the array
//     display(array, array_length);

//     // Print the elements of the array
//     printArray(array, array_length);

//     return 0;
// }
#include <stdio.h>

void read_array(int array[], int array_length);
void display_array(int array[], int array_length);

// Function to read elements into the array
void read_array(int array[], int array_length) {
    for (int i = 0; i < array_length; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]); // Corrected scanf
    }
}

// Function to display the array elements
void display_array(int array[], int array_length) {
    printf("Array elements are: ");
    for (int i = 0; i < array_length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[100]; // Declare an array of size 100
    int array_length;

    // Ask the user for the length of the array
    printf("Enter array length: ");
    scanf("%d", &array_length); // Corrected scanf with &

    // Validate array length
    if (array_length > 100 || array_length <= 0) {
        printf("Invalid array length!\n");
        return 1;
    }

    // Read elements into the array
    read_array(array, array_length);

    // Display the array elements
    display_array(array, array_length);

    return 0;
}
