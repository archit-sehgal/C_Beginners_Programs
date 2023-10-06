// Online C compiler to run C program online
#include <stdio.h>
main()
{
    float hindi,english,math;
    float avg;
    int student;
    char name;
    while(student<=5)
    {   printf("\nenter your name:");
        scanf("%s",&name);
        printf("enter hindi marks:");
        scanf("%f",&hindi);
        printf("enter english marks:");
        scanf("%f",&english);
        printf("enter math marks:");
        scanf("%f",&math);
        avg=(hindi+english+math)/3;
        printf("the avg is:%f",avg);
    }
        student=student+1;
}