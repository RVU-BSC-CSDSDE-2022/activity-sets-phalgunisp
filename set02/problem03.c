#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main(){
  int n,result;
  n=input_number();
  result=is_composite(n);
  output(n,result);
  return 0;
}

int input_number(){
  int number;
  printf("Enter the number:");
  scanf("%d", &number);
  return number;
}

int is_composite(int n){
  int i,result;
  for(i=1;i<=n;i++){
    if(n%i==0){
      result=result+1;
    }
   
    }
  return result;
}

void output(int n, int result){
  if(result==0){
     printf("%d is not a composite number/ It is a prime number.",n);
 }
  else if (result>0){
    printf("%d is a composite number.",n);
  }
  else{
    printf("1 is a unique number");
  }
}