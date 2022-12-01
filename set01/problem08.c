 #include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main(){
  int n, i, sum, a[n];
  input(n,a[n]);
  n = input_array_size();
  sum = sum_n_array(n,a[n]);
  output(n,a[n],sum);
}

int input_array_size(){
  int n;
  printf("Enter a number:");
  scanf("%d", &n);
  return n;
}

int sum_n_array(int n, int a[n]){
  int i, sum, a[n];
  sum=0;
  for (i=0; i<=n ; i++){
    sum= sum+i;
  }
  return sum;
    
}

void output(int n, int sum, int a[n]){
  printf("Sum of the first %d is the number %d", n, sum, a[n]);

