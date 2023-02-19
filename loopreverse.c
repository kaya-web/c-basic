#include<stdio.h>
 int main()
 {
    int no,r,rev=0;
    printf("enetr number\n");
    scanf("%d",&no);
    int i;
    // 
    for(i=0;no!=0;i++)
    {
        r=no%10;
        no=no/10;
        rev=rev*10+no;
        // i++;

    }
    printf("%d",rev);
 }