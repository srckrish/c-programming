//WAP to Print your name, age, and address. 
#include<stdio.h>
int main()
{
  char name[50], age[10], address[100];
  printf("Enter your Name: ");
  scanf("%s",name);
  
  printf("Enter your age: ");
  scanf("%s", age);

  printf("Enter your address: ");
  scanf("%s", address);


  printf("Your name is %s. You're %s years old. You live in %s.", name, age, address);
  return 0;
}
