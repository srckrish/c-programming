//WAP to read two integers and print their sum, difference, product, and quotient.

#include<stdio.h>
int main(){
    int first_num, second_num;
    int sum, difference, product, quotient;
    
    printf("Enter the value of first and second integers respectively: \n");
    scanf("%d %d", &first_num, &second_num);

    sum = first_num + second_num;
    difference = first_num - second_num;
    product = first_num * second_num;

    printf("Sum: %d + %d = %d\n", first_num, second_num, sum);
    printf("Difference: %d - %d = %d\n", first_num, second_num, difference);
    printf("Product: %d * %d = %d\n", first_num, second_num, product);
    
    if(second_num != 0){
        quotient = first_num / second_num;
      printf("Quotient: %d / %d = %d\n", first_num, second_num, quotient);
    } else{
      printf("Denominator is zero");
    }
return 0;
  }
