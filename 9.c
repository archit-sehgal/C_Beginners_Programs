#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    printf("OUTPUT:\n");
    if(a%2==0)
        printf("%d IS EVEN NUMBER",a);
    else
        printf("%d IS NOT EVEN NUMBER",a);
}