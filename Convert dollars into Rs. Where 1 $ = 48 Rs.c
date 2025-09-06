#include<stdio.h>
int main()
{
    float dollars,rupees;
    const float conversionRate = 48.0;
    printf("enter amount in $: ");
    scanf("%f",&dollars);
    rupees= conversionRate*dollars;
    printf("$%.2f is equal to %.2fRs.\n",dollars,rupees);
}
