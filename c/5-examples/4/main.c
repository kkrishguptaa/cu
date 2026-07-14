#include<stdio.h>

int main() {
  char fname[15];

  int ap;

  printf("First C Program\n");
  printf("Enter your First name... ");

  scanf("%s", fname);

  printf("Enter your attendance percentage... ");

  scanf("%d", &ap);

  if (ap>=91)
    printf("5 marks");
  else if (ap>=86)
    printf("4 marks");
  else if (ap>=81)
    printf("3 marks");
  else if (ap>=75)
    printf("2 marks");
  else
    printf("1 mark");
}
