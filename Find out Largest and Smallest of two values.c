 #include<stdio.h>
void main ()
{
    int a,b,c;
    printf("Enter two numbers");

    scanf("%d%d%d,&a,&b");
        c=a;
        a=b;
        b=c;
        scanf("value of a = %d\n value of b = %d",a,b);
}
