#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    if((a+b)%2==0)
        printf("%d+%d=%d >EVEN",a,b,sum);
    else
        printf("%d+%d=%d >NOT EVEN",a,b,sum);
    
}
