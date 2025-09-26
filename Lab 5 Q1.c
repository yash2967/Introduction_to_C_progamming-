#include<stdio.h>
void main()
{
    char name[50];
    printf("Enter Name\n");
    //scanf("%s",name);
    //printf("Name is %s\n",name);
    gets(name);
    printf("Name is %s\n",name);
}
