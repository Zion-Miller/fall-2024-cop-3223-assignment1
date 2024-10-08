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

double askForUserInput() {    //ask for user input (bonus function)
  double value;
  printf("Enter a value: "); //ask for value
  scanf("%lf", &value);   //scan the value entered into variable
  return value;
}

double helperFunction() {   //create a helper function to calculate the distance
  //helper function will also give us our first 2 required outputs for each function
  //declare variables
  double x1, x2, y1, y2, Distance;
  //ask for and then store coordinate values using our askForUserInput function
  printf("Enter x coordinate #1: \n");  
  x1 = askForUserInput();    
  printf("Enter x coordinate #2: \n");
  x2 = askForUserInput();
  printf("Enter y coordinate #1: \n");
  y1 = askForUserInput();
  printf("Enter y coordinate #2: \n");
  y2 = askForUserInput();
  
  printf("Point #1 entered: x1 = %.3f, y1 = %.3f\n", x1, y1);   //pdf required output 1
  printf("Point #2 entered: x2 = %.3f, y2 = %.3f\n", x2, y2);   //pdf required output 2

  //calculate and store distance
  Distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));    //distance function (basically pythagorean theorem)

  return Distance;
}

double calculateDistance() {    //calculate the distance between points

  double Distance = helperFunction();   //get first 2 outputs and distance value
  printf("The distance between the two points is %.3f\n", Distance);    //pdf required output 3

  return Distance;
}

double calculateWidth()  {   //calculate the width
  //since it is a circle, width is the same as distance
  double Distance = helperFunction(); //get first 2 outputs and distance value   
  printf("The width of the city encompassed by your request is width = %.3f\n", Distance);    //required output 3
  return 1.0;   //difficulty
}    

double calculateHeight()    {   //calculate the height 
  //since it is a cicle, height is the same as distance
  double Distance = helperFunction(); //get first 2 outputs and distance value
  printf("The height of the city encompassed by your request is height = %.3f\n", Distance);    //required output 3
  return 1.0; //difficulty
}    

double calculatePerimeter()   {    //calculate the perimeter
  //perimeter of a circle is diameter * pi
  double Distance = helperFunction();  //get first 2 outputs and distance value
  double perimeter = (Distance * PI);  //calculate perimeter using circumference formula 
  printf("The perimeter of the city encompassed by your request is perimeter = %.3f\n", perimeter);   //required output 3
  return 1.0; //difficulty
}

double calculateArea() {    //calculate the area
  //area of a circle is pi*r^2
  double Distance = helperFunction();  //get first 2 outputs and distance value
  double radius = Distance / 2;   //get radius by halving the distance
  double Area1 = (pow(radius, 2) * PI); //get area of a circle
  printf("The area of the city encompassed by your request is Area = %.3f\n", Area1); //required output 3
  return 1.0;   //difficulty
}

int main(int argc, char **argv) {    //main function copied from pdf
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();
  calculateHeight();

  return 0;
}