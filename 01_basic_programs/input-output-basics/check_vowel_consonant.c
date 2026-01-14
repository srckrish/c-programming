//Wap to read a character and check whether it is a vowel or consonant.

#include<stdio.h>
#include <ctype.h>

int main(){
  char letter;
  
  printf("Enter a character:\n");
  scanf("%c", &letter);


  if (!isalpha(letter)) {
    printf("Invalid input. Please enter an alphabet. \n");
    return 0;
  }

  letter = tolower(letter);
  
  if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
    printf("%c is an vowel letter.\n", letter);
    } else {
        printf("%c is a consonant letter.\n", letter);
      }

  return 0;
  }
