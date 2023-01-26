#include<stdio.h>
#include<math.h>

// Write a program to find whether the given 3 points form a triangle

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
  float x1,y1,x2,y2,x3,y3,result;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  result=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
  return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{

  float result;
  result= (x1(y2-y3)+x2(y3-y1)+x3(y1-y2))*0.5;
  if(result==0)
  {
    return result;
  }
  
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
  printf("The points (%f,%f), (%f,%f) and (%f,%f) do not form a triangle.",x1,y1,x2,y2,x3,y3,result);
}