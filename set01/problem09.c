#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main(){
  float n, i, sqrroot;
  n = input(n);
  sqrroot = square_root(n);
  output(n,sqrroot);
}

float input(){
  float n;
  printf("Enter a number: \n");
  scanf("%f", &n);
  return n;
}

float square_root(float n){
  
}


void output(float n, float sqrroot){
  printf("Square root of %f is  %f", n, sqrroot);
}




