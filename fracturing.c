//***************************************************************
// fracturing.c
// Author: Zion Miller
// UCFID: 5214774
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

  double Distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

  printf("Point #1 entered: x1 = %.3f, y1 = %.3f\n", x1, y1);
  printf("Point #2 entered: x2 = %.3f, y2 = %.3f\n", x2, y2); 
  printf("The distance between the two points is %.3f\n", Distance);

  return Distance
}

double calculateWidth()  {   //calculate the width
  double x1, x2, y1, y2;
  double distance = calculateDistance(&x1, &x2, &y1, &y2);
  double width = (x2-x1);
  printf("Point #1 entered: x1 = %.3f, y1 = %.3f\n", x1, y1);
  printf("Point #2 entered: x2 = %.3f, y2 = %.3f\n", x2, y2); 
  printf("The width of the city encompassed by your request is width = %.3f\n", width);
}    

double calculateHeight()    {   //calculate the height 
  double x1, x2, y1, y2;
  double distance = calculateDistance(&x1, &x2, &y1, &y2);
  double height = (y2-y1);
  printf("Point #1 entered: x1 = %.3f, y1 = %.3f\n", x1, y1);
  printf("Point #2 entered: x2 = %.3f, y2 = %.3f\n", x2, y2); 
  printf("The height of the city encompassed by your request is width = %.3f\n", width);
}    

double calculatePerimeter()   {    //calculate the perimeter

  double x1, x2, y1, y2, Distance;
  double distance = calculateDistance(&x1, &x2, &y1, &y2, &Distance);
  double perimeter = (Distance * PI)
  printf("Point #1 entered: x1 = %.3f, y1 = %.3f\n", x1, y1);
  printf("Point #2 entered: x2 = %.3f, y2 = %.3f\n", x2, y2); 
  printf("The perimeter of the city encompassed by your request is perimeter = %.3f\n", perimeter);

  return 3
}

double calculateArea();    //calculate the area
  double x1, x2, y1, y2, Distance;
  double distance = calculateDistance(&x1, &x2, &y1, &y2, &Distance);
  radius = Distance / 2;
  radiussquared = pow(radius, 2);
  Area = radiussquared * PI;
  printf("Point #1 entered: x1 = %.3f, y1 = %.3f\n", x1, y1);
  printf("Point #2 entered: x2 = %.3f, y2 = %.3f\n", x2, y2); 
  printf("The area of the city encompassed by your request is Area = %.3f\n", Area);


int main(int argc, char **argv) {    //main function
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();

  return 0;
}
