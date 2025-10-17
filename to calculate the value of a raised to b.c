include<stdio.h>

#include<math.h>

int power(int a, int b); int main()

int a, b, raised val;

printf("Enter a: "); 
scanf("Sd", &a);
printf("Enter b: "); 
scanf("%d", &b);

raised val = power(a, b);

printf("Result: *d", raised val);

int power(int a, int b)
X = pow(a, b);
return x;n
