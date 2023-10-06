
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("OUTPUT:");
    if(a>b)
        printf("\nlarger number is:%d\nsmaller number is:%d",a,b);
    else
        printf("\nlarger number is:%d\nsmaller number is:%d",b,a);
}