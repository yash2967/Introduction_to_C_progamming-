#include<stdio.h>
double power(double a, double b)
{
    double result = 1.0;
    int i;
    for(i=0;i<b;i++)
        {
            result*=a;
    }return result;
}
int main()
{
double a,b,result;
printf("\nEnter the base value(a)");
scanf("%2lf",&a);
printf("\nEnter the Power value(b)");
scanf("%2lf",&b);
result=power(a,b);
printf("%.2lf to the power %.2lf is %.2lf\n",a,b,result);
}
