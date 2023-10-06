#include<stdio.h>
main()
{
    int i,num;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;)
        {
            printf("\t%d",i);
            i=i+10;
        }
}