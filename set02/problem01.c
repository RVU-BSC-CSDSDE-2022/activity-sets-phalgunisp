#include<stdio.h>

//Write a program to find the area of a triangle.

void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);


int main(){
  float base,height,area;
  input(base,height);
}

void input(float base, float height){
  float area;
  printf("Enter the base:\n");
  scanf("%f", &base);
  printf("Enter the height:\n");
  scanf("%f", &height);
  find_area(base,height,&area);
  output(base,height,area);
}

void find_area(float base , float height, float *area){
  *area = base*height*0.5;
}

void output(float base, float height, float area){
  printf("The area of the traingle with the base %f and height %f is %f", base,height,area);
}