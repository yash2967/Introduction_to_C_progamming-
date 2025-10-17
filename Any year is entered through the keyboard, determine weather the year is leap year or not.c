#include<stdio.h>
int main()
{
    int i;
    printf("Enter year ");
    scanf("%d",&i);
    if( (i%400==0) || (i%4==0))
    {
        printf("Entered Year is leap\n");

    }
    else
    {
        printf("Entered Year is not leap");
    }
}
