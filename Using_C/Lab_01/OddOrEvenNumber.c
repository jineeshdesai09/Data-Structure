//OddOrEvenNumber
#include<stdio.h>

int main()
{
  int number;

  printf("Enter the Number: ");
  scanf("%d", &number);

  number%2 == 0 ? printf("Number %d is Even", number) : printf("Number %d is Odd", number);

  return 0;
}