#include <stdio.h>

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main(){
  int n , i ,sum_n;
  n = input_n();
  sum_n = sum_n_nos(n);
  output(n,sum_n);
}

int input_n(){
  int n;
  printf("Enter a positive number:");
  scanf("%d",&n);
  return n;
}

int sum_n_nos(int n){
  int i , sum;
  sum=0;
  for (i=1; i<=n ; i++){
    sum= sum+i;
  }
  return sum;
}

void output(int n, int sum){
  printf("Sum of the first %d is the number %d", n, sum);
}

