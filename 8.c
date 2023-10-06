#include <stdio.h>

int main()
{
    int code;
    printf("enter code to get verified:\n");
    scanf("%d",&code);
    if(code==123)
        printf("WELCOME AGENT! ur Password is:%d\n",code);
    else
        printf("ACCESS DENIED!:(");
}