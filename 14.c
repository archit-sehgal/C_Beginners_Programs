// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int age;
    char name[20];
    printf("enter your name:");
    scanf("%s",&name);
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18)
        printf("THANK YOU FOR RESPONDING:%s",&name);
    else
        printf("UNDER 18 NOT ALLOWED TO REGISTER");
}