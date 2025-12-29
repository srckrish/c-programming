// WAP to swap two numbers using: third variable


#include <stdio.h>
int main(){
  int a, b, temp;
  
  printf("Enter the first number(a):\n");
  scanf("%d",&a);

  printf("Enter the second number(b):\n");
  scanf("%d",&b);
  
  printf("Before Swaping:\n");
  printf("a = %d b = %d\n",a, b);

  temp=a;
  a=b;
  b=temp;

  printf("After Swaping:\n");
  printf("a = %d b = %d\n", a, b);

  return 0;
}
