`#include<stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main(){
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=compare(a,b,c,*largest);
  output(a,b,c,largest);
  return 0;
  }

  int input(){
  int comp;
  printf("Enter the number\n");
  scanf("%d", &comp);
  return comp;
  
  }
  void compare(int a, int b, int c, int*largest){
    if((a>=b && a>=c))
    *largest=a;
     
  if((b>=a && b>=c))
    *largest=b;
  
  if((c>=a && c>=b))
   *largest=c;
    
  return largest; 
  }
   
    
    
   void output(int a, int b, int c, int largest){
     printf("The largest of %d,%d,%d is %d ",a,b,c,largest);
   }

