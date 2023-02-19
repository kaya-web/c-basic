#include<stdio.h>
int main()
{
    int no,r,r1,sum=0;
    printf("eneter value of no\n");
    scanf("%d",&no);
    r=no%10;
    no=no/10;
    r1=no%10;
    no=no/10;
    sum=r+r1+no;
printf("%d",sum);
}