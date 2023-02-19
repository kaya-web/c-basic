#include<stdio.h>
 int main()
 {
    int no,i,fact=1;
    printf("eneter number\n");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        fact=fact*i;

    }
    printf("%d",fact);
 }