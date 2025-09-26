#include<stdio.h>
void main()
{
    char name[50];
    //printf("Enter name\n");
    //scanf("%s",name);
    gets(name);
    printf("Name is %s\n",name);
    int i;
    for(i=0;name[i]!='\0';i++);
    printf("String length is %d\n",i);
}
