#include<stdio.h>

void main() {
    int a[30], elements_lengths, index, number, i;

    // Step 1: Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &elements_lengths);

    // Step 2: Input the elements into the array
    printf("Enter the elements: \n");
    for(i = 0; i < elements_lengths; i++) {
        scanf("%d", &a[i]);
    }

    // Step 3: Input the element to be inserted and the index
    printf("Enter the element to insert: ");
    scanf("%d", &number);
    printf("Enter index where you want to insert the element: ");
    scanf("%d", &index);

    // Step 4: Validate index
    if(index > 0 || index < elements_lengths) {
        printf("Invalid index! You reached your maximum limit. Thank you.\n");
    } else {
        // Step 5: Shift elements to the right to make space for new element
        for(i = elements_lengths; i > index; i--) {
            a[i] = a[i - 1];
        }

        // Step 6: Insert the new element
        a[index] = number;
        elements_lengths++;  // Increase the size after insertion

        // Step 7: Print the updated array
        printf("Array after insertion: ");
        for(i = 0; i < elements_lengths; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}
