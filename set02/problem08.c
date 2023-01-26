#include <stdio.h>

//Write a program to find the triangle with smallest area in n given triangles.

typedef struct _triangle {
	float base, altitude, area;
} Triangle;


int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main(){
  int n;
  Triangle smallest;
  n=input_n();
  Triangle t[n];
  input_n_triangles(n,t);
  find_n_areas(n,t);
  smallest=find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0;
}

int input_n(){
  int n;
  printf("Enter the no of triangles:\n");
  scanf("%d", &n);
  return n;
}

Triangle input_triangle(){
  Triangle t;
  printf("Enter the base of the triangle:");
  scanf("%f", &t.base);
  printf("Enter the altitude of the triangle:");
  scanf("%f", &t.altitude);
  return t;
}

void input_n_triangles(int n, Triangle t[n]){
  for(int i=0;i<n;i++){
    t[i]=input_triangle();
  }
}

void find_area(Triangle *t){
  t->area= (t->base)*(t->altitude)*0.5; 
}

void find_n_areas(int n, Triangle t[n]){
  for(int i=0;i<n;i++){
    find_area(&t[i]);
  }
}


Triangle find_smallest_triangle(int n, Triangle t[n]){
  Triangle tri=t[0];
  for(int i=0;i<n;i++){
    if(tri.area>t[i].area){
      tri=t[i];
    }
  }
  //printf("%f,%f,%f",tri.base,tri.altitude,tri.area);
  return tri;
}

void output(int n, Triangle t[n], Triangle smallest){
  printf("The smallest triangle has base %f, height %f and area %f",smallest.base,smallest.altitude,smallest.area);
}
