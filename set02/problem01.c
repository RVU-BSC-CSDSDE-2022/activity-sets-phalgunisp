#include <stdio.h>

void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);


int main(){
  
}

void input(float base, float height){
  printf("Enter the base: \n", base);
  scanf("%f", &base);
  printf("Enter the height: \n", height);
  scanf("%f", &height);
  return base,height;
}

void find_area(float base , float height, float *area){
  area= 0.5*base*height;
  
}



