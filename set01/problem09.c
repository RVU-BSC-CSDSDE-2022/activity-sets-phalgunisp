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
  float number;
  printf("Enter a number: \n");
  scanf("%f", &number);
  return number;
}

float square_root(float n){
  int i;
  float sqrroot;
  float x=2; //inital guess
  for(i=0;x!=sqrroot;i++){
    sqrroot = (x+n/x)/2;
    if(fabs(x-sqrroot)<0.00000001){
      return sqrroot;
    }
    
    else{
      x=sqrroot;
    }
      
  }
}


void output(float n, float sqrroot){
  printf("Square root of %f is  %f", n, sqrroot);
}




