// WAP to swap two numbers without using thrid variable

#include <stdio.h>

int main() {
  int a, b;

  printf("Enter the first number (a):\n");
  scanf("%d", &a);

  printf("Enter the second number (b):\n");
  scanf("%d", &b);

  printf("\nBefore swapping:\n");
  printf("a = %d, b = %d\n", a, b);

  a = a+b;
  b = a-b;
  a = a-b;

  printf("\nAfter swapping:\n");
  printf("a = %d, b = %d\n", a, b); 

return 0;
}
