#include<stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    printf("OUTPUT:\n");
    if(num<0)
        printf("THE NUMBER IS NEGATIVE:%d",num);
    else
        printf("THE NUMBER IS POSITIVE:%d",num);
}