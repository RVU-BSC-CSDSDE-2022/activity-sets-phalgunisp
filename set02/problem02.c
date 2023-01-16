#include <stdio.h>


int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main(){
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}

int input_side(){
  int number;
  printf("Enter the side of the triangle:\n");
  scanf("%d", &number);
  return number;
}

int check_scalene(int a, int b, int c){
  int result=0;
  if( a==b || b==c || c==a){
    result=1;
  }
  return result;
}

void output(int a, int b, int c, int isscalene){
  if(isscalene==1){
    printf("The triangle with sides %d,%d and %d is not scalene.", a,b,c);
  }
  else{
    printf("The triangle with sides %d,%d and %d is scalene.",a,b,c);
  }
}