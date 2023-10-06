#include<stdio.h>
main()
{
    int i,num,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
        {
            sum=sum+i;
        }
    printf("sum of first %d number is:%d",num,sum);
}