#include <stdio.h>

void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main(){
  float base,height,area;
  input(base,height);
  return 0;
  
}
void input(float base, float height){
  float area;
  printf("Enter the base:\n");
  scanf("%f", &base);
  printf("Enter the height:\n");
  scanf("%f", &height);
  find_area(base,height,&area);
  printf("%f",area);
  output(base,height,area);
  
}

void find_area(float base , float height, float *area){
  *area = base*height*(1.0/2.0);
}

void output(float base, float height, float area){
  printf("The are of the triangle with base %f and height %f is %f", base,height,area);
}