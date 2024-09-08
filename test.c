#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function to ask for user input
double askForUserInput() {
    double value;
    printf("Enter a value: ");
    scanf("%lf", &value);
    return value;
}

// Function to calculate the distance between two points
// and print the entered coordinates and distance
double calculateDistance(double *x1, double *x2, double *y1, double *y2) {
    printf("Enter x coordinate #1: \n");
    *x1 = askForUserInput();
    printf("Enter y coordinate #1: \n");
    *y1 = askForUserInput();
    printf("Enter x coordinate #2: \n");
    *x2 = askForUserInput();
    printf("Enter y coordinate #2: \n");
    *y2 = askForUserInput();

    // Calculate distance (diameter of the circle)
    double distance = sqrt((*x2 - *x1) * (*x2 - *x1) + (*y2 - *y1) * (*y2 - *y1));

    // Print the coordinates and distance
    printf("Point #1 entered: x1 = %.3f, y1 = %.3f\n", *x1, *y1);
    printf("Point #2 entered: x2 = %.3f, y2 = %.3f\n", *x2, *y2);
    printf("The distance between the two points is %.3f\n", distance);

    return distance;
}

// Function to calculate the width of the circle
double calculateWidth(double distance) {
    // The width is equal to the diameter
    double width = distance;
    printf("The width of the city encompassed by your request is %.3f\n", width);
    return 1.0; // Difficulty level
}

// Function to calculate the height of the circle
double calculateHeight(double distance) {
    // The height is equal to the diameter
    double height = distance;
    printf("The height of the city encompassed by your request is %.3f\n", height);
    return 1.0; // Difficulty level
}

// Function to calculate the perimeter of the circle
double calculatePerimeter(double distance) {
    double radius = distance / 2;
    double perimeter = 2 * radius * PI;
    printf("The perimeter of the city encompassed by your request is %.3f\n", perimeter);
    return 3.0; // Difficulty level
}

// Function to calculate the area of the circle
double calculateArea(double distance) {
    double radius = distance / 2;
    double area = radius * radius * PI;
    printf("The area of the city encompassed by your request is %.3f\n", area);
    return 1.0; // Difficulty level
}

int main(int argc, char **argv) {
    double x1, x2, y1, y2;

    // Calculate distance (diameter) and store it
    double distance = calculateDistance(&x1, &x2, &y1, &y2);
    
    // Use the distance (diameter) for other calculations
    calculateWidth(distance);
    calculateHeight(distance);
    calculatePerimeter(distance);
    calculateArea(distance);

    return 0;
}