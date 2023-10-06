
#include <stdio.h>
int main()
{
    int a,d;
    printf("enter a number:");
    scanf("%d",&a);
    d=(a/2);
    if(a%2==0)
        printf("EVEN NUMBER:%d/2=%d",a,d);
    else
        printf(" ODD NUMBER:%d/2=%d",a,d);
}