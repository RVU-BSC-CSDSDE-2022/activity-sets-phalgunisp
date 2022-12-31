#include <stdio.h>

int input_n();// protype of the function //
int sum_n_nos(int n);
void output(int n, int sum);

int main(){
  int n , i ,sum_n;
  n = input_n(); // calling
  sum_n = sum_n_nos(n); // the 
  output(n,sum_n); // function
}

int input_n(){ // user input // function declaration //
  int num;
  printf("Enter a positive number:\n");
  scanf("%d",&num);
  return num;
}

int sum_n_nos(int n){ //i=loop variable//
  int i , sum;
  sum=0; // initializing the value as 0 //
  for (i=1; i<=n ; i++){ //i=1: initialization of i // i<=n is the conditon //i++ updating value of i // if i++ is not mention it is going to be an infinite loop.
    sum= sum+i; 
  }
  return sum;
}

void output(int n, int sum){
  printf("Sum of the first %d is the number %d", n, sum);
}

