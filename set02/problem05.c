#include <stdio.h>

//Write a program to find GCD _(HCF)_ of two numbers.

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main(){
  int a,b,gc_d;
  a=input();
  b=input();
  gc_d=find_gcd(a,b);
  output(a,b,gc_d);
  return 0;
}

int input(){
  int number;
  printf("Enter the number: \n");
  scanf("%d", &number);
  return number;
}

int find_gcd(int a, int b){
  int gcd;
  for(int i=1;i<=a && i<=b;i++){
    if(a%i==0 && b%i==0){
      gcd=i;
    }
  }
  return gcd;
}

void output(int a, int b, int gcd){
  printf("%d",gcd);
}
//Euclid's Algorithm see if you can figure it out