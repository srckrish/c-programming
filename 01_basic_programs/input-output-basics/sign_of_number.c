// WAP to read a number and check whether it is positive, negative, or zero.

#include<stdio.h>
int main(){
  int number;

  printf("Enter a number:\n");
  scanf("%d", &number);

  if (number > 0) {
    printf("%d is a positive number.\n", number);
  } else if(number == 0){
    printf("It's is %d.\n", number);
  } else{
    printf("%d is a negative number.\n", number);
  }

  return 0;
}
