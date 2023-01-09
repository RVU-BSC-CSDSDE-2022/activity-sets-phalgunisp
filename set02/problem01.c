#include <stdio.h>
//Write a program to find the area of a triangle.

void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main(){
  float base,height,area;
  input(base,height);
  return 0;
}

void input(float base, float height){
  float n,area;
  printf("Enter the base:");
  scanf("%f", &base);
  printf("Enter the height:");
  scanf("%f", &height);
  find_area(base,height, &area);
  output(base,height,area);
  return n;
}

void find_area(float base , float height, float *area){
  *area= base*height*0.5;
}

void output(float base, float height, float area){
  printf("The area of the triangle with base %f and height %f is %f", base,height,area);
}