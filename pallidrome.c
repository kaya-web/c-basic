#include<stdio.h>
 int main()
 {
    int no,rem,reverse=0,originalNo;
    printf("eneter no\n");
    scanf("%d",&no);
    originalNo=no;
    while(no!=0)
    {
        rem=no%10;
        reverse=reverse*10+rem;
        no=no/10;
    }
    if(originalNo==reverse)
    {
        printf("its a pallidrome no %d",reverse);
    }
    else{
        printf("its no pallidrome no %d",reverse);
    }
 }
 