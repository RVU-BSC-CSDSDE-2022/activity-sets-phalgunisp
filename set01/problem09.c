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
  printf("Enter a number: ");
  scanf("%f", &n);
  return n;
}

float square_root(float n){
  float sqrroot, i;
  sqrroot = i/2;
  sqrroot=0;
    for(i=0; i<=sqrroot; i++){
    sqrroot=sqrroot+i;
    }
  return sqrroot;
}
void output(float n, float sqrroot){
  printf("Square root of %f is  %f", n, sqrroot);
}




