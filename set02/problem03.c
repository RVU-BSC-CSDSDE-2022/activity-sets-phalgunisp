#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main(){
  int n,result;
  n=input_number();
  result=is_composite(n);
  output(n,result);
  return 0;
}

int input_number(){
  int number;
  printf("Enter the number:");
  scanf("%d", &number);
  return number;
}