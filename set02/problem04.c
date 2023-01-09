#include <stdio.h>

//Write a program to find Sum of composite number in an array of different numbers entered by the user.

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main(){
  int i,n,sum_n=0;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum_n=sum_composite_numbers(n,a);
  output(sum_n);
}

int input_array_size(){
  int number;
  printf("Enter the array size:\n");
  scanf("%d", &number);
  return number;
}
void input_array(int n, int a[n]){
  for(int i=0;i<n;i++){
    printf("Enter the number:\n");
    scanf("%d", &a[i]);
  }
}

int sum_composite_numbers(int n, int a[n]){
int i,j,result=0,count;
  for(i=0;i<n;i++){
    count=0;
    for(j=1;j<=a[i];j++){
    if(a[i]%j==0){
      count=count+1;
    }
    } 
    if(count>2){
      result=result+a[i];
    }
  }
  return result;
}
 


void output(int sum){
  printf("%d", sum);
}