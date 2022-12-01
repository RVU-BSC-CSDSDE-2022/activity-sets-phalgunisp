#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main(){
  int a,b,c;
  printf("Enter the number \n a:");
  scanf("%d", &a);
  printf("Enter the number \n b:");
  scanf("%d", &b);
  printf("Enter the number \n c:");
  scanf("%d", &c);


  
  if(a>=b && a>=c){
    printf("The largest of %d,%d,%d is %d ",a,b,c,a);
    } 
  if(b>=a && b>=c){
    printf("The largest of %d,%d,%d is %d ",a,b,c,b);
    }  
  if(c>=a && c>=b){
    printf("The largest of %d,%d,%d is %d ",a,b,c,c);
    }
  
}