#include<stdio.h>
#include<math.h>

//Write a program to find the distance between 2 points

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main()
{
  float x1,y1,x2,y2,distance;
  input(&x1,&y1,&x2,&y2);
  distance=find_distance(x1,y1,x2,y2);
  output(x1,y1,x2,y2,distance);
}

void input(float *x1, float *y1, float *x2, float *y2)
{

  printf("Enter the x1 value:\n");
  scanf("%f",x1);
  printf("Enter the y1 value:\n");
  scanf("%f",y1);
  printf("Enter the x2 value:\n");
  scanf("%f",x2);
  printf("Enter the y2 value:\n");
  scanf("%f",y2);

}

float find_distance(float x1, float y1, float x2, float y2)
{
  float distance,sqt;
  distance = (x2-x1)+(y2-y1);
  sqt=sqrt(distance);
  return sqt;
}

void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("The distance between point(%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,distance);
}