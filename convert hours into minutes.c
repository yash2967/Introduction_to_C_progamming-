#include<stdio.h>
void main()
{
    int hours;
    int minutes;
    printf("Enter value of hours");
    scanf("%d",&hours);
    minutes=hours*60;
    printf("%d hours is equal to %d minutes.\n",hours,minutes);
}
