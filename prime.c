#include<stdio.h>
 int main()
 {
    int no,i,flag=0;
    printf("enter no");
    scanf("%d",&no);
    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("is prime %d",no);
    }
    else{
        printf("%d",no);
    }
    return 0;
 }

 