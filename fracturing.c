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

#include <math.h>
#include <stdio.h>

#define PI 3.14159

double askForUserInput() {    //ask for user input
  double value;
  printf("Enter a value: "); //ask for value
  scanf("%lf", &value);   //scan the value entered into variable
  return value;
}

void helperFunction(double *x1, double *x2, double *y1, double *y2) {   //void function so there's no return
  //ask for and store coordinate values
  printf("Enter x coordinate #1: \n");  
  *x1 = askForUserInput();    
  printf("Enter x coordinate #2: \n");
  *x2 = askForUserInput();
  printf("Enter y coordinate #1: \n");
  *y1 = askForUserInput();
  printf("Enter y coordinate #2: \n");
  *y2 = askForUserInput();
}

double calculateDistance() {    //calculate the distance between points
  double x1, x2, y1, y2;
  helperFunction(&x1, &x2, &y1, &y2);   //get coordinates

  double Distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));    //distance function (basically pythagorean theorem)

  printf("Point #1 entered: x1 = %.3f, y1 = %.3f\n", x1, y1);   //pdf required output 1
  printf("Point #2 entered: x2 = %.3f, y2 = %.3f\n", x2, y2);   //pdf required output 2
  printf("The distance between the two points is %.3f\n", Distance);    //pdf required output 3

  return Distance;
}

double calculateWidth()  {   //calculate the width

  double Distance = calculateDistance();
  printf("The width of the city encompassed by your request is width = %.3f\n", Distance);
  return 1.0;
}    

double calculateHeight()    {   //calculate the height 
  double Distance = calculateDistance();
  printf("The height of the city encompassed by your request is height = %.3f\n", Distance);

  return 1.0;
}    

double calculatePerimeter()   {    //calculate the perimeter

  double Distance = calculateDistance();
  double perimeter = (Distance * PI);
  printf("The perimeter of the city encompassed by your request is perimeter = %.3f\n", perimeter);

  return 3.0;
}

double calculateArea() {    //calculate the area

  double Distance = calculateDistance();
  double radius = Distance / 2;
  double Area1 = (pow(radius, 2) * PI);
  printf("The area of the city encompassed by your request is Area = %.3f\n", Area1);

  return 1.0;
}

int main(int argc, char **argv) {    //main function
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();
  calculateHeight();

  return 0;
}