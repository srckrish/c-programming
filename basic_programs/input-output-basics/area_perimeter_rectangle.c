// WAP to find area and perimeter of a rectangle.
#include <stdio.h>
int main(){
  int length, breadth;
  int area, perimeter;

  printf("Enter the length and the breadth of the rectangle respectively:\n");
  scanf("%d %d", &length, &breadth);

  area = length*breadth;
  perimeter = 2*(length + breadth);

  printf("The area of the rectangle is %d. \nThe perimeter of the rectangle is %d.\n",area, perimeter);

  return 0;
}
