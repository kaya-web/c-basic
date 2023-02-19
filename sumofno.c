#include<stdio.h>
 int main()
 {
    int no,i,sum=0;
    printf("enter number\n");
    scanf("%d",&no);
    for(i=0;i<=no;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
 }