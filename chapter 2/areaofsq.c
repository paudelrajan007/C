#include <stdio.h>
#include <math.h>

// Function to calculate the area of a square
double area_of_square(double side) {
    return pow(side, 2);
}

int main() {
    double side, area;
    
    // Ask the user to enter the side of the square
    printf("Enter the value of the side of the square: \n");
    
    // Read the side (as a double) from user input
    scanf("%lf", &side);
    
    // Call the function to calculate the area
    area = area_of_square(side);
    
    // Print the side and area of the square with proper formatting
    printf("Side: %.2lf\n", side);
    printf("Area of the square: %.2lf\n", area);

    return 0;
}
