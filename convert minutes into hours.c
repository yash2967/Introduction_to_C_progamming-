#include<stdio.h>
void main()
{
    int minutes;
    float hours;
    printf("enter minutes");
    scanf("%d",&minutes);
    hours=minutes/60.0;
    printf("%d minutes is equal to %.2fhours\n",minutes,hours);
}
