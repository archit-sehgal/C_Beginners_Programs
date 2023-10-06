#include<stdio.h>
int main()
{
    int eng,hin,math,sum,per;
    printf("ENTER ENGLISH MARKS:");
    scanf("%d",&eng);
    printf("ENTER HINDI MARKS:");
    scanf("%d",&hin);
    printf("ENTER MATHS MARKS:");
    scanf("%d",&math);
    sum=eng+hin+math;
    per=sum*100/300;
    printf("TOTAL is:%d\n",sum);
    printf("PERCENTAGE is:%d%%\n",per);
    if(per>=90)
        printf("DISTINCTION");
    else if(per>=80)
        printf("A+ GRADE");
    else if(per>=70)
        printf("A GRADE");
    else if(per>=60)
        printf("B GRADE");
    else if(per>=50)
        printf("PASS");
    else
        printf("FAIL");
}