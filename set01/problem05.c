#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);


int main(){
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=compare(a,b,c);
  output(a,b,c,largest);
}

int input(){
  int number;
  printf("Enter the number:");
  scanf("%d", &number);
  return number;
}

int compare(int a, int b, int c){
  if((a>b) && (a>c)){
    return a;
  }
  else if((b>a) && (b>c)){
    return b;
  }
  else{
    return c;
  }
  
    
}

void output(int a, int b, int c, int largest){
  printf("the largest of %d %d %d is %d", a,b,c,largest);
  
}
