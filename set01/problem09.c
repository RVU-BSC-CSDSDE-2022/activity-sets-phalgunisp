#include <stdio.h>
#include <math.h>

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
 float x = n;
 float y = 1;
       while (x > y) {
              x = (x + y) / 2;
              y = n / x;
  }
      return x;
  }
void output(float n, float sqrroot){
  printf("Square root of %f is  %f", n, sqrroot);
}




