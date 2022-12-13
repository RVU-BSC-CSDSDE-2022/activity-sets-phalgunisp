#include <stdio.h>
struct complex_number
{
    float real;
    float imaginary;
}
typedef complex_number Complex;

int main()
{
   Complex c1;
   scanf("%f", &c1.real);
   scanf("%f", &c1.imaginary);
   printf(" %.1f ", c1.real);
   printf("%.1f", c1.imaginary);
   return 0;
}                    
