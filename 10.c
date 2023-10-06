#include<stdio.h>
main()
{
    int i,num;
    printf("enter a number:");
    scanf("%d",&num);
    if(i%2==0)
        for(i=0;i<=num;i=i+2)
            {
                 printf("\t%d",i);
            }
}