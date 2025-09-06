#include<stdio.h>
void main()
{
    float dollars,rupees;
    const float coversionRate = 48.0;
    printf("enter amount in Rs.:");
    scanf("%f",&rupees);
    dollars=rupees/coversionRate;
    printf("%.2fRs. is equal to %.2f$\n",rupees,dollars);
}
