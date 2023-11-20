#include <stdio.h>

void printCube(int sideLength) {
    // Loop for each row
    for (int i = 0; i < sideLength; i++) {
        // Loop for each column in the row
        for (int j = 0; j < sideLength; j++) {
            printf("# ");
        }
        // Move to the next line after each row is printed
        printf("\n");
    }
}

int main() {
    int sideLength;

    // Get user input for the side length of the cube
    printf("Enter the side length of the cube: ");
    scanf("%d", &sideLength);

    // Check if the input is valid (positive)
    if (sideLength <= 0) {
        printf("Please enter a positive integer for the side length.\n");
        return 1; // Return an error code
    }

    // Call the function to print the cube
    printCube(sideLength);

    return 0; // Return success
}