#include<stdio.h>
#include<conio.h>

#define pi 3.1415

void areaOfSquare() {

  float side;
  printf("\nEnter the side of square: ");
  scanf("%f", &side);
  printf("Area of Square = %f", side*side);
  getch();
}

void areaOfRectangle() {

  float length, width;
  printf("\nEnter the length and width of rectangle: ");
  scanf("%f%f", &length, &width);
  printf("Area of Rectange = %f", length*width);
  getch();
}

void areaOfCircle() {

  float radius, area;
  printf("\nEnter the radius of circle: ");
  scanf("%f", &radius);
  area = pi*radius*radius;
  printf("Area of Circle = %f", area);
  getch();
}

void main() {

  clrscr();
  areaOfSquare();
  areaOfRectangle();
  areaOfCircle();
}