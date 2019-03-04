#include<stdio.h>
main()
{
  char firstname [20];
  char lastname [20];
  printf("\n enter your first name:");
  scanf("%s",&firstname);
  printf("\n enter your last name: ");
  scanf("%s",&lastname);
  strcat(firstname,lastname);
  printf("\n your full name is:%s",firstname);
}
