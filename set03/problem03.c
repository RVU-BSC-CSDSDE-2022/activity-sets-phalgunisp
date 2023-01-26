#include <stdio.h>

//Write a program to check if the given number is prime.

int input_number();
int is_prime(int n);
void output(int n, int result);

int main()
{
  int n,result;
  n = input_number();
  result = is_prime(n);
  output(n,result);
  return 0;
}

int input_number()
{
  int number;
  printf("Enter the number:\n");
  scanf("%d", &number);
  return number;
}

int is_prime(int n)
{
  int i,result=0;
  for(i=1;i<=n;i++)
    {
      if(n%i==0)
      {
        result=result+1;
      }
    }
  return result;
}

void output(int n, int result)
{
  if(result==2)
  {
    printf("%d is prime number",result);
  }
  else
  {
    printf("%d is not a prime number",n);
  }
}