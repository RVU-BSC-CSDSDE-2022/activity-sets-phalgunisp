#include <stdio.h>

//Write a program to reverse a string.

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main(){
  char str[100], rev_str[100];
  int a,reverse_a=0;
  a=input();
  str_reverse(str,rev_str);
  output(a,reverse_a);
  return 0;
}
void input_string(char *a){
  printf("Enter the string name:");
  scanf("%s", &a);
}

void str_reverse(char *str, char *rev_str){
  int a;
  for(int i=0;a[i]!="\0";i++){
    rev_str= i-1;
  }
  for(int j=0;j<int i;j++){
    a[j]=a[rev_str];
    rev_str--;
  }
}