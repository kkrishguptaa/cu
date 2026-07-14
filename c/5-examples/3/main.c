#include<stdio.h>

int main() {
  int val1, val2;
  printf("\nEnter first number:");
  scanf ("%d", &val1);
  printf("\nEnter second number:");
  scanf ("%d", &val2);

  if (val1>val2)
    printf("Largest number is %d", val1);
  else
    printf("Largest number is %d", val2);
  return 0;
}
