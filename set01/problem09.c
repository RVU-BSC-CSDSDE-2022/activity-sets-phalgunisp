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
  float number;
  printf("Enter a number: \n");
  scanf("%f", &number);
  return number;
}

float square_root(float n){
  int i;
  float sqrroot;
  float x=2; //inital guess
  for(i=0;i<n;i++){
    sqrroot = (x+n/x)/2;
    if(x==sqrroot){
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




