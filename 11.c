#include<stdio.h>
main()
{
    int num[5];
    int lar=0;
    int i;
    for(i=1;i<=5;i++)
    {
        printf("enter the number:");
        scanf("%d",&num[i]);
        if(num[i]>lar)
            {
                lar=num[i];
            }
        
    }
    printf("larger number is :%d",lar);
    
}