//***************************************************************
// fracturing.c
// Author: Zion Miller
// Date: 09/04/2024
// Class: COP 3223, Professor Parra
// Purpose: write a program with several internal functions 
// "fracturing" what would be a large main function into several
// smaller ones
// Output: dimensions of a circle based off user input
// //************************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14159

double askForUserInput() {    //ask for user input
  double value;
  printf("Enter a value: ");
  scanf("%lf", &value);
  return value;
}

double calcculateDistance() {    //calculate the distance between points

  printf("Enter x coordinate #1: \n");
  x1 = askForUserInput();
  printf("Enter x coordinate #2: \n");
  x2 = askForUserInput();
  printf("Enter y coordinate #1: \n");
  y1 = askForUserInput();
  printf("Enter y coordinate #2: \n");
  y2 = askForUserInput();

  double diameter = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

  printf("Point #1 entered: x1 = %d, y1 = %d\n", x1, y1);
  printf("Point #2 entered: x2 = %d, y2 = %d\n", x2, y2); 
  printf("The distance between the two points is %.2f\n", diameter);

  return Distance
}

double calculatePerimeter();    //calculate the perimeter

  double Perimeter = calculateDistance() * PI;

double calculateArea();    //calculate the area
  radius = calculateDistance / 2

  radiussquared = pow(radius, 2);
  Area = radiussquared * PI

double calculateWidth();    //calculate the width
  
double calculateHeight();    //calculate the height 

int main(int argc, char **argv) {    //main function
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();

  return 0;
}
