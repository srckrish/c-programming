// WAP to find the largest of two numbers.

#include <stdio.h>

int main(){
  int a, b;

  printf("Enter any two integer numbers: \n");
  scanf("%d %d", &a,&b);

  (a>b) 
    ? printf("%d is greater than %d.\n", a, b) 
    : (b>a) 
    ? printf("%d is greater than %d.\n", b, a) 
    : printf("Both numbers are equal. \n");

  return 0;
}
