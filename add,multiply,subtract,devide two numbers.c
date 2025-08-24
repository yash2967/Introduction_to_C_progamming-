#include<stdio.h>
void main()
{
    int a,b;
    int c,d,e;
    float f;
    printf("Enter Two Values");
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=(float)a/b;
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    printf("e=%d\n",e);
    printf("f=%.2f\n",f);
}
