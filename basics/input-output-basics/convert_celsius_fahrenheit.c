// #WAP to convert Celsius to Fahrenheit.

#include<stdio.h>
int main(){
  float celsius, fahrenheit;

  printf("Enter the temperature in Celsius:\n");
  scanf("%f", &celsius);

  fahrenheit = (celsius * 9/5) + 32;

  printf("The temperature is %0.1f in Fahrenheit.\n",fahrenheit);

  return 0;
  }
