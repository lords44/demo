#include<stdio.h>
int factorial(int num)
{
  if(num == 0)
    return 1;
  else
    return(num * factorial(num - 1));
}
int main()
{
  int num;
  char option;
  long fact;
  do
  {
    printf("enter the number : ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("factorial of %d is %ld \n", num, fact);
    
    printf("do you want to continue?(y/n) : ");
    getchar();
    scanf("%c", &option);
  }while(option == 'y' || option == 'Y');
}
