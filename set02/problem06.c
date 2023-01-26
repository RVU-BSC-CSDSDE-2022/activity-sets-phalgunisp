#include <stdio.h>

//Write a program to reverse a string.

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main(){
  char str[100], rev_str[100];
  input_string(str);
  str_reverse(str,rev_str);
  output(str,rev_str);
  return 0;
}
void input_string(char *a){
  printf("Enter the string name:");
  scanf("%s", a);
}

void str_reverse(char *str, char *rev_str){
  int i,len=0,j=0;
  for(i=0;str[i]!='\0';i++){
    len++;
  }
 
  for(i=len-1;i>=0;i--){
    rev_str[j]=str[i];
    j++;
  }
}

void output(char *a, char *reverse_a){
    printf("%s", reverse_a);
}

