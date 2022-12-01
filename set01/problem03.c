#include <stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main(void){
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
}

int input() {
  int num;
  printf("Enter a number");
  scanf("%d" , &num);
  return num;
}
int add(int a, int b){
  int s;
  s = a+b;
  return s;
}

void output(int a, int b, int sum){
  printf("The sum of %d and %d is %d " , a,b,sum);
}


  
  
  
